// Your code here...
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    scanf("%d %d %d", &a, &b, &c);

    // Check triangle validity (Triangle Inequality Theorem)
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid Triangle");
    } else {
        printf("Not a Valid Triangle");
    }

    return 0;
}
