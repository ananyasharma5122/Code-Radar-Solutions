// Your code here...
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the maximum number
    printf("%d", max);

    return 0;
}

