#include <stdio.h>

int main() {
    char name[100];
    int age ;
    char hobby[100];
    scanf("%s",name);
    scanf("%d",&age);
    getchar();
    fgets(hobby,sizeof(hobby),stdin);
    printf("\nName: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}