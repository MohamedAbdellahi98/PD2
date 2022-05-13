#include<stdio.h>
#include<stdlib.h>
void main(){

    int n;
    int *ptr;

    printf("PLEASE Enter The Number of Elements: ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    printf("The area for %d elements = [%d]\n",n,sizeof(ptr));

}
