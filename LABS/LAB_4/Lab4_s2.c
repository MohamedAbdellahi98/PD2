#include<stdio.h>

int main(){
    int n1, n2;
    int *p1 ,*p2;

    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    p1 = &n1;

    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    p2 = &n2;

    printf("\n%d + %d = %d\n",*p1,*p2,*p1+*p2);

    return 0;
}

