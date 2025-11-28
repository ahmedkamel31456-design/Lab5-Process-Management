# Makefile for Lab 5 - Process Management
# Compiles all demonstration programs

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Target executables
PROGRAMS = process_creation output_program simple_program

# Default target: build all programs
all: $(PROGRAMS)
	@echo "All programs compiled successfully!"
	@echo "Run './process_creation' to test fork()"
	@echo "Run './output_program' to test linker"
	@echo "Run './simple_program' to test loader"

# Exercise 1: Process Creation using fork()
process_creation: process_creation.c
	$(CC) $(CFLAGS) process_creation.c -o process_creation
	@echo "Built process_creation"

# Exercise 5: Linker demonstration
# Combines file1.c and file2.c into output_program
output_program: file1.c file2.c
	$(CC) $(CFLAGS) file1.c file2.c -o output_program
	@echo "Built output_program (linker demo)"

# Exercise 6: Loader demonstration
# Uses math library to show dynamic linking
simple_program: simple_program.c
	$(CC) $(CFLAGS) simple_program.c -o simple_program -lm
	@echo "Built simple_program (loader demo)"

# Clean up compiled files
clean:
	rm -f $(PROGRAMS)
	@echo "Cleaned all executables"

# Run all demos
run: all
	@echo "\n=== Running Process Creation Demo ==="
	./process_creation
	@echo "\n=== Running Linker Demo ==="
	./output_program
	@echo "\n=== Running Loader Demo ==="
	./simple_program
	@echo "\n=== Checking shared libraries (ldd) ==="
	ldd simple_program

# Help target
help:
	@echo "Available targets:"
	@echo "  make          - Build all programs"
	@echo "  make all      - Build all programs"
	@echo "  make clean    - Remove all executables"
	@echo "  make run      - Build and run all demos"
	@echo "  make help     - Show this help message"

.PHONY: all clean run help
