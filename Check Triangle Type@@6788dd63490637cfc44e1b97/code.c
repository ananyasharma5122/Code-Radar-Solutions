#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check if it forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check for Equilateral triangle (all sides equal)
        if (a == b && b == c) {
            printf("Equilateral");
        }
        // Check for Isosceles triangle (any two sides equal)
        else if (a == b || b == c || a == c) {
            printf("Isosceles");
        }
        // If no sides are equal, it's a Scalene triangle
        else {
            printf("Scalene");
        }
    } else {
        printf("Not a Triangle");
    }

    return 0;
}
