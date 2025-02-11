#include <stdio.h>
int ToggleNthBit(int num,int n) {
    return num ^ (1<<n);
}
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int result = ToggleNthBit(num,n);

    printf("%d\n",n,result);
    return 0;
}