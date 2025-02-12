// Your code here...
#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) { // Loop till sqrt(num)
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // Prime number
}

int main() {
    int num;
    scanf("%d", &num);

    // Checking if the number is prime
    if (is_prime(num)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
