#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int number;
    struct node * next;
}node;

node* cutheadaddlast(node* head);
node* createlist(void);
void printList(node *head);

void main(void){
    int n;

    node *head = createlist();

    printf("\nyour list : \n");
    printList(head);

    printf("\nnew list : \n");
    head = cutheadaddlast(head);
    printList(head);

    printf("\nDo it again[any number=Yes , 0=No] ? \n");
    scanf("%d",&n);

    while(n != 0){
        printf("\nnew list : \n");
        head = cutheadaddlast(head);
        printList(head);
        printf("\nDo it again[any number=Yes , 0=No] : \n");
        scanf("%d",&n);
    }
}


node* cutheadaddlast(node* head){

    node *p = head;
    node *q = head;

    while(p->next != NULL){
        p = p->next;
    }

    p->next = head;
    head = q->next;
    p->next->next = NULL;

    return head;
}

node* createlist(void){
    node *head,*p;

    int n,i=1;

    printf("\n**you have create list**");
    printf("\nEnter the list \"ENTER -1 TO STOP\": \n");
    scanf("%d",&n);

    while(n != -1){
        if(i==1){
            head = (node*)malloc(sizeof(node));
            head->number = n;
            p = head;
            i++;
        }else{
            p->next = (node*)malloc(sizeof(node));
            p = p->next;
            p->number = n;
        }
        scanf("%d",&n);
    }
    p->next = NULL;
    return head;
}

void printList(struct node *head){
    struct node *p = head;

    while(p != NULL){
        printf("%d\t",p->number);
        p = p->next;
        }
    printf("\n");
}
