// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input from user
    scanf("%d", &num);

    // Check divisibility by 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }

    return 0;
}
