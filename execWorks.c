#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Before exec: PID = %d\n", getpid());

    // Replace current process with the "ls" command
    char *args[] = {"/bin/ls", "-l", NULL};
    execv("/bin/ls", args);

    // This will only run if exec fails
    perror("execv failed");
    return 1;
}
