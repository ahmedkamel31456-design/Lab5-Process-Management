/*
 * file1.c
 * Contains the hello() function definition
 * Lab 5 - Exercise 5: Linker Demonstration
 * 
 * This file defines a function that will be linked with file2.c
 * to demonstrate how the linker combines multiple object files.
 */

#include <stdio.h>

// Function definition - will be called from file2.c
void hello() {
    printf("Hello from file1!\n");
    printf("This function was defined in file1.c\n");
    printf("but called from file2.c\n");
    printf("The linker resolved this symbol reference.\n");
}
