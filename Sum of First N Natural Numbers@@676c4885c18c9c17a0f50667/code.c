// Your code here...
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the value of N
    scanf("%d", &n);

    // Loop to calculate the sum
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}
