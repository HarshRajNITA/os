#include <stdio.h>

void inputBurstTime(int process[], int n, int bt[]) {
    printf("Enter the burst time:\n");
    for (int i = 0; i < n; i++) {
        process[i] = i + 1;  // Initialize process IDs
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // Bubble sort to sort burst time and align process IDs
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (bt[j] > bt[j + 1]) {
                // Swap burst time
                int temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                // Swap corresponding process ID
                int temp_pid = process[j];
                process[j] = process[j + 1];
                process[j + 1] = temp_pid;
            }
        }
    }
}

void calculateWaitingTime(int n, int bt[], int wt[]) {
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
}

void calculateTurnAroundTime(int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void displayResults(int process[], int n, int bt[], int wt[], int tat[]) {
    float avgWt = 0, avgTat = 0;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", process[i], bt[i], wt[i], tat[i]);
        avgWt += wt[i];
        avgTat += tat[i];
    }

    printf("\nAverage Waiting Time: %.2f", avgWt / n);
    printf("\nAverage Turnaround Time: %.2f\n", avgTat / n);
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int process[n], bt[n], wt[n], tat[n];

    inputBurstTime(process, n, bt);
    calculateWaitingTime(n, bt, wt);
    calculateTurnAroundTime(n, bt, wt, tat);
    displayResults(process, n, bt, wt, tat);

    return 0;
}
