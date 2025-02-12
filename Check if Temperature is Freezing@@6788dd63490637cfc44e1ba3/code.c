#include <stdio.h>

int main() {
    float temp;
    scanf("%f", &temp);

    // Checking the temperature condition
    if (temp <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above freezing\n");
    }

    return 0;
}
