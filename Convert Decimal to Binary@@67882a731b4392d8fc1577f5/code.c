#include <stdio.h>

void decimal_to_binary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Array to store binary digits
    int i = 0;

    while (n > 0) {
        binary[i] = n & 1; // Get the last bit using bitwise AND
        n = n >> 1; // Right shift the number by 1 bit
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;

    scanf("%d", &num);


    decimal_to_binary(num);
    printf("\n");

    return 0;
}
