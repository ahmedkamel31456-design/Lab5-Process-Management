/*
 * simple_program.c
 * A simple program to demonstrate the loader
 * Lab 5 - Exercise 6: Loader Demonstration
 * 
 * Use 'ldd simple_program' to see the shared libraries
 * that the loader needs to load at runtime.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("=== Loader Demonstration ===");
    printf("\n\n");
    
    printf("This is a simple program.\n");
    printf("When executed, the loader:\n");
    printf("  1. Loads this executable into RAM\n");
    printf("  2. Loads required shared libraries (.so files)\n");
    printf("  3. Resolves runtime dependencies\n");
    printf("  4. Prepares the program for execution\n");
    printf("\n");
    
    // Using math library to demonstrate dynamic linking
    double num = 16.0;
    double result = sqrt(num);
    printf("Math library demo: sqrt(%.1f) = %.1f\n", num, result);
    printf("\n");
    
    printf("To see the shared libraries this program uses:\n");
    printf("Run: ldd simple_program\n");
    printf("\n");
    printf("Common libraries you'll see:\n");
    printf("  - libc.so.6 (C standard library)\n");
    printf("  - libm.so.6 (Math library)\n");
    printf("  - ld-linux.so (Dynamic linker/loader)\n");
    
    return 0;
}
