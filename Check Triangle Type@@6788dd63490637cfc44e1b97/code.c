// Your code here...
#include <st.dio>
int main() {
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (a + b > c && a + c > b && b + c > a) {
       if ((num1==num2 && num2==num3 && num3==num1)) {
        printf("Equilateral")
       else if ((num1==num2 || num2==num3 || num3=num1)) {
        printf("Isosceles")
       }
       else {
        printf("Scalene")
       }
    }

    }
}