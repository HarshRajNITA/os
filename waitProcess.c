#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        printf("Child process running. PID: %d\n", getpid());
        sleep(3);  // Simulate work
        printf("Child process finished.\n");
    } else {
        // Parent process
        printf("Parent waiting for child to finish...\n");
        wait(NULL);  // Wait for child to complete
        printf("Parent resumed after child finished. PID: %d\n", getpid());
    }

    return 0;
}
