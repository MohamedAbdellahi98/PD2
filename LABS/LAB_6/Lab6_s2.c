#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main(void){

    int i,j,k=0;

    char s1[100],s2[100];
    char *p1;
    char *p2;

    printf("Enter sring 1: ");
    gets(s1);

    printf("Enter sring 2: ");
    gets(s2);

    p1=s1;
    p2=s2;

    char *output = (char *)malloc(strlen(s1)+strlen(s2));

    i=0;
    while ( *(p1+i) != '\0'){
        *(output+i) = *(p1+i);
        i++;
    }
    j=0;

    while ( *(p2+j) != '\0'){
        *(output+i) = *(p2+j);
        i++;
        j++;
    }

    puts(output);

    free(output);
}


