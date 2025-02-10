#include <stdio.h>
int GetNthBit(int number,int n) {
    return (number >> n) & 1;
}
int main() {
    int number,n;
    scanf("%d %d",&number,&n);

    printf("%d\n",GetNthBit(number,n));
    return 0;
}