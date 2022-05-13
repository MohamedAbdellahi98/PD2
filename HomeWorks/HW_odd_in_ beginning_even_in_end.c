#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int number;
struct node * next;
}nnode;

nnode *head;
static int i = 1;

nnode* odd_in_beginning(int Odd);
nnode* even_in_end(int even);

void printList(nnode *head);

void main(void){
    int n;

    printf("Enter number \"to stop enter -1\": ");
    scanf("%d",&n);

    while(n != -1){
        if(n % 2 != 0){
            odd_in_beginning(n);
            printList(head);
        }else{
            even_in_end(n);
            printList(head);
        }
        printf("\n\nEnter number: ");
        scanf("%d",&n);
    }
}

void printList(nnode *head){
    nnode *p = head;

    while(p != NULL){
        printf("%d\t",p->number);
        p = p->next;
        }
}

nnode* odd_in_beginning(int odd){

    if (i == 1){
        head = (nnode*)malloc(sizeof(nnode));
        head->number = odd;
        head->next = NULL;
        i++;
    }else{
        nnode *p = (nnode*)malloc(sizeof(nnode));
        p->number = odd;
        p->next = head;
        head = p;
    }
    return head;
}

nnode* even_in_end(int even){

    nnode *p = head;

    if (i == 1){
        head = (nnode*)malloc(sizeof(nnode));
        head->number = even;
        head->next = NULL;
        i++;
    }else{
        while(p->next != NULL){
            p = p->next;
        }
        nnode *q = (nnode*)malloc(sizeof(nnode));
        q->number = even;
        q->next = NULL;
        p->next = q;
    }
    return head;
}
