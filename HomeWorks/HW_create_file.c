#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int no;
int mark;
char name[20];
FILE *fptr;
void CreatFile(void);
void PrintData(void);
void Average(void);
void Add_10_points(void);

void main(void){

    int choice;

    do{
        printf("\n");
        printf("[0] exit\n");
        printf("[1] Create File\n");
        printf("[2] Print Data\n");
        printf("[3] Average\n");
        printf("[4] Add 10 Points\n");

        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                CreatFile();
                break;
            case 2:
                PrintData();
                break;
            case 3:
                Average();
                break;
            case 4:
                Add_10_points();
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
            printf("Enter Midterm Mark: ");
            scanf("%d",&mark);

            fprintf(fptr,"%s\t%d\t%d\n",name,no,mark);

            printf("another stdunet ?(y\\n): ");

        }while((ans=getche())=='y');
        fclose(fptr);
    }
}

void PrintData(void){

    int choice;

    printf("\n");
    printf("[1] Print All Data\n");
    printf("[2] Print Greater Than 50\n");
    printf("[3] Print Less Than 50\n");

    scanf("%d",&choice);

    switch(choice){
        case 1:
            if((fptr = fopen("data.txt","r"))== NULL){
                printf("Can't not open file");
            }else{
                fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                while(!feof(fptr)){
                    printf("\n%s\t%d\t%d\n",name,no,mark);
                    fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                }
                fclose(fptr);
            }
            break;
        case 2:
             if((fptr = fopen("data.txt","r"))== NULL){
                printf("Can't not open file");
            }else{
                fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                while(!feof(fptr)){
                    if(mark >= 50){
                        printf("\n%s\t%d\t%d\n",name,no,mark);
                    }
                    fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                }
                fclose(fptr);
            }
            break;
        case 3:
            if((fptr = fopen("data.txt","r"))== NULL){
                printf("Can't not open file");
            }else{
                fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                while(!feof(fptr)){
                    if(mark <= 50){
                        printf("\n%s\t%d\t%d\n",name,no,mark);
                    }
                    fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
                }
                fclose(fptr);
            }
            break;
        default:
            printf("\n!!Choose Agian!!\n");
    }

}

void Average(void){
    int sum=0, i=0;

    if((fptr = fopen("data.txt","r"))== NULL){
        printf("Can't not open file");
    }else{
        fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
        while(!feof(fptr)){
            sum+=mark;
            i++;
            fscanf(fptr,"%s\t%d\t%d",name,&no,&mark);
        }
        fclose(fptr);
        printf("\naverage of Marks : %.2f\n",(float)sum/i);
    }
}

void Add_10_points(void){

    FILE *tmp;
    tmp = fopen("tmpdata.txt","w");

    if((fptr = fopen("data.txt","r"))== NULL)
        printf("Can't not open file");

    fscanf(fptr,"%s %d %d",name,&no,&mark);
    while(!feof(fptr)){
        if(mark < 50){
            fprintf(tmp,"\n%s\t%d\t%d\n",name,no,mark+10);
        }else{
            fprintf(tmp,"\n%s\t%d\t%d\n",name,no,mark);
        }
        fscanf(fptr,"%s %d %d",name,&no,&mark);
    }
    fclose(fptr);
    fclose(tmp);

    remove("data.txt");
    rename("tmpdata.txt","data.txt");

    printf("\n**Done**\n");
}

