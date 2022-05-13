#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void){
    int n,i,j,comp;
    char *sp=(char*)malloc(10*sizeof(char));

    printf("Enter number of words: ");
    scanf("%d",&n);

    char **list = (char*)malloc(n*sizeof(char));



    for(i=0;i<n;i++){

        *(list+i) = (char*)malloc(10*sizeof(char));
        printf("Enter the word: ");
        scanf("%s",*(list+i));

    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            comp = strcmp(*(list+j),*(list+j+1));
            if(comp > 0){
                strcpy(sp,*(list+j));
                strcpy(*(list+j),*(list+j+1));
                strcpy(*(list+j+1),sp);
            }
        }
    }

    for(i=0;i<n;i++){
        puts(*(list+i));
    }

    free(list);

}
