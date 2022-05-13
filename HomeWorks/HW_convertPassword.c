#include<stdio.h>
    char s[3][3] = {
        {'A','D','G'},
        {'B','E','H'},
        {'C','F','I'}
    };

    int s2[3][3] = {
        {11,12,13},
        {21,22,23},
        {31,32,33}
    };
void main(){
    int a[6],*p=a,*p2,x=1;
    char pass[6];
    char *Passptr;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%c\t",s[i][j]);
        printf("\n");
    }

    printf("Enter Password only from table: ");
    gets(pass);

    Passptr = pass;

    while(*Passptr != '\0'){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(*Passptr == s[i][j]){
                    *p = s2[i][j];
                }
            }
        }
        *Passptr++;
        *p++;
    }

    p2=a;

    for(int i=0;i<6;i++){
        if(x==1)
            printf("%d\t",a[i]);
        else
            printf("Plese Enter Password only from Table");
    }

    printf("\n");

    while(*p2 != *p && x == 1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(*p2 == s2[i][j]){
                        printf("%c\t",s[i][j]);
                    }
                }
            }
        *p2++;
    }

}
