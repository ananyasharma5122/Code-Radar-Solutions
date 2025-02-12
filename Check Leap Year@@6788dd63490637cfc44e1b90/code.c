// Your code here...
#include <stdio.h>

int main() {
    int year;

    // Input from user
    scanf("%d", &year);

    // Check leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}
