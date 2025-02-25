#include <stdio.h>

int main(){
    int num, i, isPrime = 1;  // 'isPrime' assumes the number is prime by default

    // Input a positive number
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check if the number is less than 2 (0 and 1 are not prime)
    if (num <= 1) {
        isPrime = 0;
}
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // If divisible, set isPrime to 0 (not prime)
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
