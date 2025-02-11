#include <stdio.h>
int FindLowest(int num){
    if (num ==0) return -1;
    int position = 1;
    while ((num & 1 ) == 0){
        num >>=1;
        position ++;
    }
    return position;
}
int main() {
    int num;
    scanf("%d",num);
    int pos =FindLowest(num);
    if (pos ==-1)
        printf("\n");
    else
        printf("%d\n",pos);
    return 0;
}