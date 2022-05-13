#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int number;
    struct node * next;
}node;

node* DeleteMiddleNode(node* head);

node* CreateList(void);
void PrintList(node *head);

void main(void){
    int n;

    node *head = CreateList();

    printf("\nyour list : \n");
    PrintList(head);

    printf("\nnew list : \n");
    head = DeleteMiddleNode(head);
    PrintList(head);
}


node* DeleteMiddleNode(node* head){

    node *p = head, *q = p;
    int i=1,j;

    while(p->next != NULL){
        p = p->next;
        i++;
    }

    p = head;

    for(j=1;j<=i/2;j++){
        q = p;
        p = p->next;
        if(j==i/2){
            q->next = p->next;
            free(p);
        }
    }
    return head;
}

node* CreateList(void){
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

void PrintList(struct node *head){
    struct node *p = head;

    while(p != NULL){
        printf("%d\t",p->number);
        p = p->next;
        }
    printf("\n");
}

