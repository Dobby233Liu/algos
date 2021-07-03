all: build test
build:
	clang -g test.c -o test.out
test: build
	./test.out
clean:
	rm test.out

.PHONY : all build test
