#include<stdio.h>
void main(){
    int a[5];
    int i,*p,tmp;

    for (i=0;i<5;i++){
        printf("Enter value [%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    p=a;

    for (i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if (*p > a[j]){
                tmp = *p;
                *p = a[j];
                a[j] = tmp;
            }
        }
        p++;
    }

    p=a;
        for (i=0;i<5;i++){
            printf(" value [%d]: %d\n",i+1,*p++);
    }
}
