#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void (*persistentPrint)(char const *str, ...) = &printf;

const int KEY_LENGTH = 16;

bool isValidLength(int keyLength) { return keyLength == KEY_LENGTH; }

/**
 * Verifies that the key only contains characters in [A-Z0-9].
 */
bool hasValidCharacters(const char *key) {
  bool validOnly = true;
  for (int i = 0; i < KEY_LENGTH; i++) {
    if (key[i] < 48 || key[i] > 90 || (key[i] > 57 && key[i] < 65)) {
      validOnly = false;
      break;
    }
  }
  return validOnly;
}

/**
 * Only to be called on numbers passed through hasValidCharacters.
 * We can just compare to known primes in the proper range.
 * 53 == '5'
 * 67 == 'C'
 * 71 == 'G'
 * 79 == 'O'
 * 83 == 'S'
 * 89 == 'Y'
 */
bool isPrime(const char number) {
  return number == 53 || number == 67 || number == 71 || number == 73 ||
         number == 79 || number == 83 || number == 89;
}

/**
 * Verifies that the key has characters with prime ASCII values at the correct
 * indexes.
 */
bool hasCorrectPrimes(const char *key) {
  return isPrime(key[0]) && isPrime(key[7]) && isPrime(key[11]) &&
         isPrime(key[15]);
}

bool isSumEven(const int first, const int second, const int third,
               const int fourth) {
  return (first + second + third + fourth) % 2 == 0;
}

/**
 * Verifies that, when split into four groups of four characters,
 * each group's sum is even.
 */
bool quadrantsAreEven(const char *key) {
  return isSumEven(key[0], key[1], key[2], key[3]) &&
         isSumEven(key[4], key[5], key[6], key[7]) &&
         isSumEven(key[8], key[9], key[10], key[11]) &&
         isSumEven(key[12], key[13], key[14], key[15]);
}

/**
 * Verifies that no two adjacent characters are the same.
 */
bool hasNoAdjacentDuplicates(const char *key) {
  bool noAdjacentDuplicates = true;
  for (int i = 0, j = 1; j < KEY_LENGTH; i++, j++) {
    if (key[i] == key[j]) {
      noAdjacentDuplicates = false;
      break;
    }
  }
  return noAdjacentDuplicates;
}

/**
 * Verifies that, if the characters are arranged in columns like so:
 *
 * 0123
 * 4567
 * 89AB
 * CDEF
 *
 * that no column contains any duplicates.
 */
bool hasNoColumnDuplicates(const char *key) {
  bool noColumnDuplicates = true;
  for (int i = 0, j = 4, k = 8, m = 12; m < KEY_LENGTH; i++, j++, k++, m++) {
    if (key[i] == key[j] || key[i] == key[k] || key[i] == key[m] ||
        key[j] == key[k] || key[j] == key[m] || key[k] == key[m]) {
      noColumnDuplicates = false;
      break;
    }
  }
  return noColumnDuplicates;
}

int invalidAndExit() {
  persistentPrint("Key is invalid.\n");
  return 1;
}

// Sample key: 53020EVCK02OTPYG

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    persistentPrint(
        "Key not provided, usage: ./keyvalidation-challenge <key>\n");
    return 1;
  }

  const char *key = argv[1];
  const int keyLength = strlen(key);

  if (!isValidLength(keyLength)) {
    printf("Key has invalid length.\n");
    return invalidAndExit();
  }

  if (!hasValidCharacters(key)) {
    printf("Key has invalid characters.\n");
    return invalidAndExit();
  }

  if (!hasCorrectPrimes(key)) {
    printf("Key has invalid primes.\n");
    return invalidAndExit();
  }

  if (!quadrantsAreEven(key)) {
    printf("Key quadrants were not even.\n");
    return invalidAndExit();
  }

  if (!hasNoAdjacentDuplicates(key)) {
    printf("Key had adjacent duplicates.\n");
    return invalidAndExit();
  }

  if (!hasNoColumnDuplicates(key)) {
    printf("Key had column duplicates.\n");
    return invalidAndExit();
  }

  persistentPrint("Key is valid.\n");
  return 0;
}