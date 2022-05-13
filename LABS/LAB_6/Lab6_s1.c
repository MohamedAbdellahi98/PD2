#include<stdio.h>
#include<stdlib.h>

void main(){

    int i=0,j=0,x;
    int *p;

    p  =(int*)malloc(sizeof(int));

        printf("Enter number: ");

        scanf("%d",&x);
    while(x != 0){

        p[i] = x;
        i++;

        p = realloc(p,i*sizeof(int));
        printf("Enter number: ");

        scanf("%d",&x);
    }

    for(j=0;j<i;j++)
        printf("%d\t",p[j]);

    free(p);

}
