#include <stdio.h>
int clearNthBit(int number,int n) {
    return number & ~(1<<n);

}
int main() {
    int number,n;
    scanf("%d %d",&number,&n);


    printf("%d\n",clearNthBit(number,n));
    return 0;
}