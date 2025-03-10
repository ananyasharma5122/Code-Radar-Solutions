// Your code here...
#include <stdio.h>

void printAlternatingTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print 1 if the sum of (i + j) is even, else print 0
            printf("%d ", (i + j) % 2);
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printAlternatingTriangle(rows);

    return 0;
}
