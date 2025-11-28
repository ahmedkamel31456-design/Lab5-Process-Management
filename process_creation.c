/*
 * process_creation.c
 * Demonstrates the fork() system call for creating child processes
 * Lab 5 - Exercise 1: Process Creation
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    
    printf("Parent process starting. PID: %d\n", getpid());
    
    // Create a child process using fork()
    pid = fork();
    
    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed!\n");
        exit(1);
    } else if (pid == 0) {
        // Child process
        printf("This is the CHILD process.\n");
        printf("  Child PID: %d\n", getpid());
        printf("  Parent PID: %d\n", getppid());
        printf("Child process exiting...\n");
        exit(0);
    } else {
        // Parent process
        printf("This is the PARENT process.\n");
        printf("  Parent PID: %d\n", getpid());
        printf("  Child PID: %d\n", pid);
        
        // Wait for child to complete
        wait(NULL);
        printf("Parent: Child process has completed.\n");
    }
    
    return 0;
}
