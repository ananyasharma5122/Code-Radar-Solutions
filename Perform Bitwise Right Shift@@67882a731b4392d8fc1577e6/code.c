#include <stdio.h>
int main() {
    int num,shift,result;
    scanf("%d",num);
    result = num >> shift;
    printf("%d\n", result);
    return 0;
}