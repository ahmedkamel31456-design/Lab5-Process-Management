/*
 * file2.c
 * Contains the main() function that calls hello() from file1.c
 * Lab 5 - Exercise 5: Linker Demonstration
 * 
 * This file calls a function defined in file1.c
 * The linker will resolve the hello() symbol reference.
 */

#include <stdio.h>

// Function declaration - defined in file1.c
void hello();

int main() {
    printf("=== Linker Demonstration ===");
    printf("\n");
    printf("This is file2.c (contains main)\n");
    printf("Calling hello() function from file1.c...\n");
    printf("\n");
    
    // Call the function defined in file1.c
    hello();
    
    printf("\n");
    printf("The linker combined file1.c and file2.c\n");
    printf("to create a single executable.\n");
    
    return 0;
}
