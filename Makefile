CC=gcc

CFLAGS=-I./include -ggdb -Ofast -march=native -pedantic -Wall -Wextra
LIBS=-lm

all: build_test test

build_test: test/module_test.c
	${CC} ${CFLAGS} ${LIBS} test/module_test.c src/module.c -o build/test

.PHONY: clean build_test test
clean:
	rm -rf build/*

test:
	cd build; \
	./test    \
	cd ..;
