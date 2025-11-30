#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int bill[n][m];

    // Input the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];
    int dayTotal[m];

    // Initialize totals
    for (int i = 0; i < n; i++)
        studentTotal[i] = 0;

    for (int j = 0; j < m; j++)
        dayTotal[j] = 0;

    // Calculate totals
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    // Print each student's weekly total
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }

    // Find the day with highest collection
    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }

    printf("Highest collection on Day %d\n", maxDay + 1);

    // Find highest spender(s)
    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");

    // Print all students with max spend
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) printf(" and ");
            printf("Student %d", i + 1);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}
