targets = lab.bin lab1.bin lab2.bin lab3.bin lab4.bin lab5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab.bin lab1.bin lab2.bin lab3.bin lab4.bin lab5.bin
lab.bin: src/lab.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab1.bin: src/lab1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab2.bin: src/lab2.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3.bin: src/lab3.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4.bin: src/lab4.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5.bin: src/lab5.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
  
run: clean prep compile
	./dist/lab5.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

