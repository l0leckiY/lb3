targets = lab06.bin lab51.bin lab52.bin lab53.bin lab54.bin lab55.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab06.bin lab51.bin lab52.bin lab53.bin lab54.bin lab55.bin
lab06.bin: src/lab06.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab51.bin: src/lab51.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab52.bin: src/lab52.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab53.bin: src/lab53.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab54.bin: src/lab54.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab55.bin: src/lab55.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab06.bin
format: #TODO

tidy: # TODO
