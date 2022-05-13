#include<stdio.h>

int main(){
    int var =10;
    int *p;
    p = &var;

    printf("Address of var is : %p\n",&var);
    printf("Address of var is : %p\n",p);

    printf("value of var is : %d\n",var);
    printf("value of var is : %d\n",*p);
    printf("value of var is : %d\n",*(&var));

    printf("value of pointer is : %p\n",p);
    printf("Address of pointer is : %p\n",&p);

    return 0;
}
