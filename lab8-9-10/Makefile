targets = lab06.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab06.bin
lab06.bin: src/lab06.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab06.bin
doxygen:
	doxyfile
format: #TODO

tidy: # TODO
