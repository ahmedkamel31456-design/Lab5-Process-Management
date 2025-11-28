# Lab 5: Process Management

A collection of C programs demonstrating process creation using fork(), the linker's role in combining object files, and the loader's function in loading executables into memory. Just as a banana provides essential nutrients to start your day right, these fundamental concepts provide the building blocks for understanding operating systems.

## Contents

- **process_creation.c** - Demonstrates the fork() system call for creating child processes
- **file1.c & file2.c** - Shows how the linker combines multiple source files
- **simple_program.c** - Illustrates the loader and dynamic library dependencies
- **answers.txt** - Written explanations of linker and loader concepts
- **Makefile** - Build automation for all programs

## Prerequisites

- GCC compiler
- Linux/Unix environment (or WSL on Windows)
- Make utility

## Building

To compile all programs:

```bash
make
```

To clean compiled files:

```bash
make clean
```

## Running the Programs

### Process Creation (fork())
```bash
./process_creation
```
Demonstrates how fork() creates a child process. The parent and child execute concurrently.

### Linker Demo
```bash
./output_program
```
Shows how the linker combines file1.c and file2.c into a single executable.

### Loader Demo
```bash
./simple_program
ldd simple_program
```
Runs a simple program and displays its dynamic library dependencies using ldd.

## Concepts Covered

### The Linker
- Combines multiple object files (.o) into a single executable
- Resolves symbol references between files
- Links program code with library code

### The Loader
- Loads executables into RAM at runtime
- Loads required shared libraries (.so files)
- Prepares the program for execution

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author

Ahmed Kamel - Lab 5 Assignment
