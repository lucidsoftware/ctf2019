debug: keyvalidation.c
	gcc keyvalidation.c -o keyvalidation

challenge: keyvalidation.c
	cat keyvalidation.c > keyvalidation-challenge.c
	sed -i 's/isValidLength/func1/g' keyvalidation-challenge.c
	sed -i 's/hasValidCharacters/func2/g' keyvalidation-challenge.c
	sed -i 's/isPrime/func3/g' keyvalidation-challenge.c
	sed -i 's/hasCorrectPrimes/func4/g' keyvalidation-challenge.c
	sed -i 's/isSumEven/func5/g' keyvalidation-challenge.c
	sed -i 's/quadrantsAreEven/func6/g' keyvalidation-challenge.c
	sed -i 's/hasNoAdjacentDuplicates/func7/g' keyvalidation-challenge.c
	sed -i 's/hasNoColumnDuplicates/func8/g' keyvalidation-challenge.c
	sed -i 's/noAdjacentDuplicates/var1/g' keyvalidation-challenge.c
	sed -i 's/noColumnDuplicates/var2/g' keyvalidation-challenge.c
	sed -i -E 's/printf\(.*?\);//g' keyvalidation-challenge.c
	gcc keyvalidation-challenge.c -o keyvalidation-challenge

run:
	npm install
	node server.js