#include<stdio.h>
void main(){
    int a[5];
    int i,*p,sum=0;

    for (i=0;i<5;i++){
        printf("Enter value [%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    p=a;

    for (i=0;i<5;i++){
        sum += *p;
        p++;
    }

    printf(" sum = %d\n",sum);
}

