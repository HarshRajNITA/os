
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();  // Create a child process

    if (pid < 0) {
        printf("Fork failed!\n");
    }
    else if (pid == 0) {
        // Child process
        printf("Hello from the child process! PID: %d\n", getpid());
    }
    else {
        // Parent process
        printf("Hello from the parent process! PID: %d\n", getpid());
    }

    return 0;
}

