#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){

    char name[]="Mohamed Abdellahi";
    char *ptr;

    printf("Enter Your name: ");
    gets(name);

    ptr = (char*)malloc(strlen(name));

    printf("[%d]\n",sizeof(ptr));

    free(ptr);

}
