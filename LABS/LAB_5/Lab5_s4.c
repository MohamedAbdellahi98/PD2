#include<stdio.h>
#include<stdlib.h>
void main(){

    int n,i;
    int *ptr;

    printf("Number of Elements: ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++){
        printf("Enter Element[%d]: ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++){
        printf("Element[%d] = %d\n",i+1,ptr[i]);
    }

    printf("New Number of Elements: ");
    scanf("%d",&n);

    ptr = realloc(ptr,n*sizeof(int));

    for(i=0;i<n;i++){
        printf("Enter Element[%d]: ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++){
        printf("Element[%d] = %d\n",i+1,ptr[i]);
    }
    free(ptr);
}

