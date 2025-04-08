#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char dir[100];

    printf("Enter directory path to list: ");
    scanf("%s", dir);

    char *args[] = {"/bin/ls", "-l", dir, NULL};

    printf("\nListing contents of: %s\n\n", dir);

    // Replace current process with `ls` command
    execv("/bin/ls", args);

    // This will execute only if exec fails
    perror("execv failed");
    return 1;
}
