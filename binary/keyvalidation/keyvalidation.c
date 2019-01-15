#include <stdio.h>

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    printf("No key provided to validate.\n");
    return 1;
  }

  const char *key = argv[1];

  printf("key is %s\n", key);

  // TODO: parse and validate key

  return 0;
}