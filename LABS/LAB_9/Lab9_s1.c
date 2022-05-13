#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    char No[10];
    char Name[20];
    int Midterm;
    int finalNot;
    struct student *next
    }node;

node* createStudentd(void);
void printList(node *head);
void printStudent(node *p);
node* UpdateList(node *head);
node* addStudentd(node *head);
node* removeStudentd(node *head);
void average(node *head);
void search(node *head);
void main(){

    node *head;
    int choice;

    printf("\n**Buil a list of students first**\n");
    head = createStudentd();

    do{
        printf("\n");
        printf("[0] exit\n");
        printf("[1] Print List\n");
        printf("[2] Update Studentd\n");
        printf("[3] Add Studentd\n");
        printf("[4] Remove Studentd\n");
        printf("[5] Average\n");
        printf("[6] Search\n");

        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                printList(head);
                break;
            case 2:
                head = UpdateList(head);
                break;
            case 3:
                head = addStudentd(head);
                break;
            case 4:
                head = removeStudentd(head);
                break;
            case 5:
                average(head);
                break;
            case 6:
                search(head);
                break;
            default:
                printf("!!Sorry choose again!!");
        }
    }while(choice != 0);
}

node* createStudentd(void){
    int n,i;

    node *p,*head;

    printf("\nEnter number of Students: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i==1){

            head = (node*)malloc(sizeof(node));
            p = head;

        }else{

            p->next = (node*)malloc(sizeof(node));
            p = p->next;

        }
            printf("\n");

            printf("%d.Enter Student id: ",i);
            scanf("%s",p->No);

            printf("%d.Enter Student Name: ",i);
            scanf("%s",p->Name);

            printf("%d.Enter Midterm mark: ",i);
            scanf("%d",&p->Midterm);

            printf("%d.Enter final mark: ",i);
            scanf("%d",&p->finalNot);

    }
    p->next = NULL;

    return head;
}

void printList(node *head){
    node *p = head;
    int i=1;

    while(p != NULL){
        printf("%d.Student id: %s \n",i,p->No);
        printf("%d.Student Name: %s \n",i,p->Name);
        printf("%d.Midterm mark: %d \n",i,p->Midterm);
        printf("%d.final mark: %d \n",i,p->finalNot);
        printf("\n");
        p = p->next;
        i++;
        }
}

void printStudent(node *p){
    printf("Student id: %s \n",p->No);
    printf("Student Name: %s \n",p->Name);
    printf("Midterm mark: %d \n",p->Midterm);
    printf("final mark: %d \n",p->finalNot);
    printf("\n");
}



node* UpdateList(node *head){
    char sNo[20];
    int x;
    node *p=head;

    printf("Enter Student Number for Update: ");
    scanf("%s",sNo);

    while(p != NULL){
        x = strcmp(p->No,sNo);
        if(x==0){
            printf("Student id: %s \n",p->No);

            printf("Enter New Midterm mark: ");
            scanf("%d",&p->Midterm);

            printf("Enter New final mark: ");
            scanf("%d",&p->finalNot);

            break;
        }else if(p->next == NULL && x!=0){
            printf(" %s id NOT FOUND\n",sNo);
        }

        p = p->next;
    }
    return head;
}

node* addStudentd(node *head){
    node *p=head, *New=(node*)malloc(sizeof(node));

    printf("Enter Student id: ");
    scanf("%s",New->No);

    printf("Enter Student Name: ");
    scanf("%s",New->Name);

    printf("Enter Midterm mark: ");
    scanf("%d",&New->Midterm);

    printf("Enter final mark: ");
    scanf("%d",&New->finalNot);

    New->next = p;
    head = New;

    return head;
    printf("\n");
}

node* removeStudentd(node *head){

    char sNo[20];
    int x;
    node *p=head,*q;

    printf("\nEnter Student Number to delet: ");
    scanf("%s",sNo);

    do{
        x = strcmp(p->No,sNo);
        if(x==0){
            if(p==head){
                head = p->next;
                free(p);
                return head;
            }
            q->next=p->next;
            free(p);
            break;
        }else if (p->next == NULL && x != 0){
            printf("\n %s id NOT FOUND\n",sNo);
            break;
        }
        q = p;
        p = p->next;
    }while(p->next != NULL || p->next == NULL);

    return head;
}

void average(node *head){
    node *p = head;
    int i=0, sumMid=0, sumfinal=0;
    int x;

    while(p != NULL){
        sumMid += p->Midterm;
        sumfinal += p->finalNot;
        p = p->next;
        i++;
    }

    printf("\n[1]average of midterm\n[2]average of final\n[3]print grades are greater than 60 : ");
    scanf("%d",&x);

    switch(x){
        case 1:
            printf("\naverage of midterm : %.2f\n",(float)sumMid/i);
            break;
        case 2:
            printf("\naverage of final : %.2f\n",(float)sumfinal/i);
            break;
        case 3:
            p = head;
            while(p != NULL){
                if(p->finalNot >= 60)
                    printf("\n%s has [%d]\n",p->Name,p->finalNot);
                p = p->next;
            }
            break;
        default:
            printf("\n!!choose from [1] [2] or [3] only!!\n");
    }
}

void search(node *head){

    char name[20], id[10];
    int choice,x,i=1;

    node *namep=head, *idp=head;

    printf("\n[1]search by student Number\n[2]search by student Name : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("\nEnter Student Number to search: ");
            scanf("%s",id);
            while(idp != NULL){
                x = strcmp(idp->No,id);
                if(x==0){
                    printStudent(idp);
                    i=0;
                }
                idp = idp->next;
            }
            if(i==1)
                printf("\n!! %s id NOT FOUND !!\n",id);
            break;
        case 2:
            printf("\nEnter Student Name to search: ");
            scanf("%s",name);
            while(namep != NULL){
                x = strcmp(namep->Name,name);
                if(x==0){
                    printStudent(namep);
                    i=0;
                }
                namep = namep->next;
            }
            if(i==1)
                printf("\n!! %s id NOT FOUND !!\n",name);
            break;
        default:
            printf("\n!!choose from [1] or [2] only!!\n");
    }

}



