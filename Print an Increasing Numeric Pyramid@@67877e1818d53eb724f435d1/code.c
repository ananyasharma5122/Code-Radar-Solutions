#include <stdio.h>

int main() {
    int k, i, j, space;

    // Input the number of rows
    scanf("%d", &k);

    // Loop to print the pyramid
    for (i = 1; i <= k; i++) {  // Runs from 1 to k
        // Print leading spaces for alignment
        for (space = 1; space <= k - i; space++) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

