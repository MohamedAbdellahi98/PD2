#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main(void){
    int i=0,j,x=0,m=0;
    int *cp,*tp;

    cp=(int*)malloc(sizeof(int));
    tp=(int*)malloc(sizeof(int));

    int No[10]={2,1,1,0,2,0,6,5,1,2};

    int *p=No;

    while(i < 10){

        if (*(p+i) % 2 == 0){
            *(cp+m) = *(p+i);
            m++;
            cp=realloc(cp,m*sizeof(int)+1);
        }else{
            *(tp+x) = *(p+i);
            x++;
            tp=realloc(tp,x*sizeof(int)+1);
        }
        i++;
    }

    printf("Odd:");
    for(j=0;j<x;j++)
        printf("\t%d\t",*(tp+j));

    printf("\n");

    printf("Even:");
    for(j=0;j<m;j++)
        printf("\t%d\t",*(cp+j));

    free(tp);
    free(cp);
}
