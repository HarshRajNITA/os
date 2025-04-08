#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
        sleep(5);  // Wait for parent to exit
        printf("Child's PPID: %d\n", getppid());
    } else {
        printf("Parent exiting...\n");
        exit(0);  // Child becomes orphan
    }
    return 0;
}

