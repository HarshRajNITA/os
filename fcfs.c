#include <stdio.h>

void inputBurstTime(int n, int bt[]) {
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
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

void displayResults(int n, int bt[], int wt[], int tat[]) {
    float avgWt = 0;
    float avgTat = 0;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
        for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
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

    int bt[n], wt[n], tat[n];

    inputBurstTime(n, bt);
    calculateWaitingTime(n, bt, wt);
    calculateTurnAroundTime(n, bt, wt, tat);
    displayResults(n, bt, wt, tat);

    return 0;
}
