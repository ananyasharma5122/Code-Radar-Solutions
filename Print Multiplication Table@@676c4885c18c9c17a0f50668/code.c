// Your code here...
#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    scanf("%d", &num);

    // Loop to print the multiplication table from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d\n", num * i);
    }

    return 0;
}
