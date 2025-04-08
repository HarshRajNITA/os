#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main() {
    pid_t pid;

    // Create a child process
    pid = fork();

    switch (pid) {
        case -1:
            // Fork failed
            perror("Fork failed!");
            exit(1);

        case 0:
            // Child process
            printf("\n[Child Process]");
            printf("\nPID: %d", getpid());
            printf("\nPPID: %d\n", getppid());
            break;

        default:
            // Parent process
            printf("\n[Parent Process]");
            printf("\nPID: %d", getpid());
            printf("\nPPID: %d", getppid());
            printf("\nChild PID: %d\n", pid);
            break;
    }

    return 0;
}

