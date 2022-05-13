#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int no;
char name[20];
char dep[30];
FILE *fptr;
void CreatFile(void);
void Search(void);
void addStudent(void);
void Sort(void);
void main(void){

    int choice;

    do{
        printf("\n");
        printf("[0] exit\n");
        printf("[1] Create File\n");
        printf("[2] Search By Name\n");
        printf("[3] Add Student\n");

        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                CreatFile();
                break;
            case 2:
                Search();
                break;
            case 3:
                addStudent();
                break;
            default:
                printf("!!Sorry choose again!!");
        }
    }while(choice != 0);
}

void CreatFile(void){

    char ans;

    if((fptr = fopen("data.txt","w"))== NULL){
        printf("Can't not open file");
    }else{
        do{
            printf("\n");
            printf("Enter Name: ");
            scanf("%s",name);
            printf("Enter Student Number: ");
            scanf("%d",&no);
            printf("Enter Department: ");
            scanf("%s",dep);

            fprintf(fptr,"%s\t%d\t%s\n",name,no,dep);

            printf("another stdunet ?(y\\n): ");

        }while((ans=getche())=='y');
        fclose(fptr);
    }
}

void Search(void){

    char sname[20];
    char temp[100];
    char ans;
    int found=0,x;

    if((fptr = fopen("data.txt","r"))== NULL){
        printf("Can't not open file");
    }else{
        do{
            printf("\n");
            printf("\nEnter name To search: ");
            scanf("%s",sname);
            fscanf(fptr,"%s\t%d\t%s",name,&no,dep);
            while(!feof(fptr)){
                if(strcmp(name,sname) == 0){
                    printf("\n%s\t%d\t%s\n",name,no,dep);
                    found=1;
                }
                fscanf(fptr,"%s\t%d\t%s",name,&no,dep);
            }
            if(found==0)
                 printf("\n\"%s\" NOT FOUND\n",sname);
            rewind(fptr);
            printf("\nanother stdunet ?(y\\n): ");

        }while((ans=getche())=='y');
        fclose(fptr);
    }
}

void addStudent(void){

    char ans;

    if((fptr = fopen("data.txt","a+"))== NULL){
        printf("Can't not open file");
    }else{
        do{
            printf("\n");
            printf("Enter Name: ");
            scanf("%s",name);
            printf("Enter Student Number: ");
            scanf("%d",&no);
            printf("Enter Department: ");
            scanf("%s",dep);

            fprintf(fptr,"%s\t%d\t%s\n",name,no,dep);

            printf("another stdunet ?(y\\n): ");

        }while((ans=getche())=='y');
        fclose(fptr);
    }
}


