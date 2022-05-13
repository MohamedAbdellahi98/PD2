#include<stdio.h>
#include<stdlib.h>
void main(){

    int no,i=0,j;
    int *p;

    printf("Enter Number: ");
    scanf("%d",&no);

    p = (int*)malloc(sizeof(int));

    while (no != 0){

        *(p+i) = no%2;
        no/=2;
        i++;
        p = realloc(p,i*sizeof(int));
    }

    for(j=i-1;j>=0;j--){
        printf("%d",*(p+j));
    }
    free(p);
}


