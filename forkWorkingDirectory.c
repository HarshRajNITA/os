#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    pid_t pid;
    char cwd[PATH_MAX];

    // Create a child process
    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    // Child Process
    else if (pid == 0) {
        printf("Child Process:\n");
        printf("PID: %d\n", getpid());

        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            printf("Child Current Working Directory: %s\n", cwd);
        } else {
            perror("getcwd() error in child");
        }
    }

    // Parent Process
    else {
        printf("Parent Process:\n");
        printf("PID: %d\n", getpid());

        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            printf("Parent Current Working Directory: %s\n", cwd);
        } else {
            perror("getcwd() error in parent");
        }
    }

    return 0;
}
