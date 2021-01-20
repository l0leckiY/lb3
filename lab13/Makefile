targets = lab13.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab13.bin
lab13.bin: src/lab13.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab13.bin
format: #TODO

tidy: # TODO
