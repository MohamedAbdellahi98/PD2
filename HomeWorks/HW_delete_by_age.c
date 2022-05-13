#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    char name[20];
    int age;
struct node * next;
}node;

node* createlist(void);
void printList(node *head);

node* deleteNode(node *head, int age);

void main(void){
    node *head;
    int age,n;

    head = createlist();
    printList(head);

    printf("\nEnter student age to delete it : ");
    scanf("%d",&age);

    head = deleteNode(head,age);
    printList(head);
}

node* deleteNode(node *head, int age){
    node *p = head,*q;
    int i=0;
    while(p->next != NULL || p->next == NULL){
        if(p->age == age){
            if(p==head){
                head = p->next;
                free(p);
                break;
            }
            q->next = p->next;
            i=1;
            free(p);
            break;
        }
        q = p;
        p = p->next;
    }
    if(i == 0 && p->next == NULL )
        printf("\n**NOT FOUND**\n");

    return head;
}

void printList(node *head){
    node *p = head;

    while(p != NULL){
        printf("%s : ",p->name);
        printf("%d",p->age);
        printf("\n");
        p = p->next;
        }
}

node* createlist(void){
    node *head,*p;

    int n,i=1;

    printf("\n**you have create list**");
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

        printf("%d.Enter Student Name: ",i);
        scanf("%s",p->name);

        printf("%d.Enter Student age: ",i);
        scanf("%d",&p->age);
    }
    p->next = NULL;

    return head;
}

