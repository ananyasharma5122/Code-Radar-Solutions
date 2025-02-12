#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    scanf("%d", &num);

    // Loop to print the multiplication table from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

