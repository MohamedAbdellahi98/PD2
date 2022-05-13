#include<stdio.h>
typedef struct students_data{
    char first_name[20];
    char last_name[20];
    char studentNo[10];
    int midtermGrade;
    int finalGrade
    }s_data;

void main(void){

    s_data *student;
    int i,j,x;

    for(i=0;i<2;i++){
        printf("Enter first name: ");
        gets((student+i)->first_name);

        printf("Enter last name: ");
        gets((student+i)->last_name);

        printf("Enter student id: ");
        gets((student+i)->studentNo);

        printf("Enter Midterm grade: ");
        scanf("%d",&(student+i)->midtermGrade);
        fflush(stdin);

        printf("Enter final grade: ");
        scanf("%d",&(student+i)->finalGrade);
        fflush(stdin);
        printf("\n");
    }

    for(i=0;i<2;i++){
        printf("%d. first name: %s\n",i+1,(student+i)->first_name);

        printf("%d. last name: %s\n",i+1,(student+i)->last_name);

        printf("%d. student id: %s\n",i+1,(student+i)->studentNo);

        printf("%d. Midterm grade: %d\n",i+1,(student+i)->midtermGrade);

        printf("%d. final grade: %d\n",i+1,(student+i)->finalGrade);
    }

   /*int sumMid=0, sumFinal=0;

    for(i=0;i<2;i++){
        sumMid += (student+i)->midtermGrade;
        sumFinal += (student+i)->finalGrade;
    }
    printf("Midterm avg: %d\n",sumMid/i);
    printf("final avg: %d\n",sumFinal/i);
    */
}
