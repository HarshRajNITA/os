#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process exits immediately
        printf("Parent process exiting. PID: %d\n", getpid());
        exit(0);
    } else if (pid == 0) {
        // Child becomes orphan after parent exits
        sleep(2);  // Ensure parent exits first
        printf("I am the orphan child.\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID (PPID): %d\n", getppid());
    } else {
        perror("fork failed");
    }

    return 0;
}
