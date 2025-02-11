#include <stdio.h>
int FindLowest(int num) {
    int position = 1;
    while (num & 1 ){
        num >>=1;
        position++;
    }
    return position;
}
int main() {
    int num;
    scanf("%d",&num);
    int pos =FindLowest(num);
    printf("%d\n",pos);
  
}