#include <stdio.h>

int main() {
    int n, qt, i, time = 0, done;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], rem[n], wt[n], tat[n];

    printf("Enter burst times:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
        wt[i] = 0;
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &qt);

    do {
        done = 1;
        for (i = 0; i < n; i++) {
            if (rem[i] > 0) {
                done = 0;
                if (rem[i] > qt) {
                    time += qt;
                    rem[i] -= qt;
                } else {
                    time += rem[i];
                    wt[i] = time - bt[i];
                    rem[i] = 0;
                }
            }
        }
    } while (!done);

    float avgWT = 0, avgTAT = 0;
    printf("\nProcess\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        avgWT += wt[i];
        avgTAT += tat[i];
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAvg Waiting Time = %.2f", avgWT / n);
    printf("\nAvg Turnaround Time = %.2f\n", avgTAT / n);
    return 0;
}
