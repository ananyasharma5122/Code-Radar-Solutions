#include <stdio.h>

// Function to check if the number is prime
int isPrime(int n) {
    // Handle the case for numbers less than 2
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    
    // Check for factors from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n is divisible by i, hence not prime
        }
    }
    
    return 1;  // n is prime
}

int main() {
    int num;
    
    // Input a positive number
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check and display if the number is prime or not
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
