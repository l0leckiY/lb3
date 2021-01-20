targets = zad1.bin zad2.bin zad3.bin zad4.bin zad5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: zad1.bin zad2.bin zad3.bin zad4.bin zad5.bin
zad1.bin: src/zad1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
zad2.bin: src/zad2.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
zad3.bin: src/zad3.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
zad4.bin: src/zad4.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
zad5.bin: src/zad5.c 
	$(CC) $(C_OPTS) $< -o ./dist/$@
  
run: clean prep compile
	./dist/zad1.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

