// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input from user
    scanf("%d", &num);

    // Check the number type
    if (num > 0) {
        printf("Positive");
    } else if (num < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }

    return 0;
}
