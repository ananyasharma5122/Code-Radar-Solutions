#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    if (num & 0x80000000)
        printf("Set\n");
    else 
        printf("Not Set");
    return 0;
}