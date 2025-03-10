#include <stdio.h>

void printPalindromicTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print increasing part of the palindrome
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing part of the palindrome
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("");
    scanf("%d", &rows);

    printPalindromicTriangle(rows);

    return 0;
}

