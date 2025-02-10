#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    if (num & 0)
        printf("Set\n");
    else 
        printf("Not Set");
    return 0;
}