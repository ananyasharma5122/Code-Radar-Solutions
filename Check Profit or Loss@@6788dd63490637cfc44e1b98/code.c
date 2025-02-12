#include <stdio.h>
int main() {
    int l,p;
    scanf("%d %d",&p,&l);
    if (l>p) {
        printf("Loss");
    } 
    else if (p>l) {
        printf("Loss");
    }
    else {
        printf("No Profit No Loss");
    }
    }

