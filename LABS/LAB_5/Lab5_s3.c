#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){

    char fname[]="Mohamed";
    char lname[]="abdellahi";
    char *ptr;

    ptr = (int*)malloc(sizeof(fname));

    printf("[%d]\n",sizeof(ptr));

    ptr = (int*)realloc(ptr,sizeof(fname)+sizeof(lname));

    printf("[%d]\n",sizeof(ptr));
}
