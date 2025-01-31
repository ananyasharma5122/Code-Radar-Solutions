#include <stdio.h>

int main() {
    double num1,num2,num3;
    double average;
    scanf("%d,%d,%d",&num1,&num2,&num3);
    average = (num1 + num2 + num3) / 3 ;
    printf("Average: %.2f\n",average);
    return 0;
}