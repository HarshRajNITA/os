#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (fork() > 0) exit(0);    // Parent exits

    setsid();                   // Become session leader
    chdir("/");                 // Change working directory
    close(0); close(1); close(2);  // Close std I/O

    while (1) {
        FILE *fp = fopen("/tmp/mydaemon.log", "a");
        if (fp) {
            fprintf(fp, "Daemon running... PID: %d\n", getpid());
            fclose(fp);
        }
        sleep(5);
    }
    return 0;
}

