#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
        printf("Child exiting...\n");
        exit(0);
    } else {
        printf("Parent sleeping...\n");
        sleep(30);  // Child becomes zombie
    }
    return 0;
}

