CCFLAG = -Wall -Werror

all: deposit-calc deposit-test

deposit-calc: build/src/main.o build/src/deposit.o
	gcc -o bin/deposit-calc build/src/main.o build/src/deposit.o

build/src/main.o: src/main.c
	gcc $(CCFLAG) -o build/src/main.o -c src/main.c

build/src/deposit.o: src/deposit.c
	gcc $(CCFLAG) -o build/src/deposit.o -c src/deposit.c

.PHONY: clean

clean:
	rm -rf build/test/*.o build/src/*.o bin/*

deposit-test: build/test/main.o build/test/deposit_test.o build/src/deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/src/deposit.o -o bin/deposit-test

build/test/main.o: test/main.c
	gcc $(CCFLAG) -I src -I thirdparty -c test/main.c -o build/test/main.o

build/test/deposit_test.o: test/deposit_test.c
	gcc $(CCFLAG) -I thirdparty -I src -c test/deposit_test.c -o build/test/deposit_test.o
