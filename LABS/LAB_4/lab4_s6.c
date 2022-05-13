#include<stdio.h>
void main(){
    char s[100];
    char *sptr;
    int  length=0,i ;

    printf("Enter string: ");
    gets(s);

    sptr = s;

    while(*sptr!='\0'){
        length++;
        *sptr++;
        if(*sptr == '\0')
            for(i=length;i>=0;i--)
                printf("%c",*sptr--);
    }
}
