#include<stdio.h>
void main(){
    char s[100];
    char *sptr;
    int  length=0,i ;

    printf("Enter string: ");
    gets(s);

    //*sptr = s;

    for (int i = 0;*(sptr +i)!='\0';i++){
        length ++;
    }

    printf("[%d]",length);
}
