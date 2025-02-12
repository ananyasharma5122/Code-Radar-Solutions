// Your code here...
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    scanf("%c", &ch);

    // Check if the character is a vowel (both uppercase and lowercase)
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    }
    // Check if the character is a consonant (any letter that is not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
    // Check if the character is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
