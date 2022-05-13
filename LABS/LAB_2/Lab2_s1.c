#include <stdio.h>

int sum_of_numbers(int);

void main(){

    int num;

    printf("Please Number: ");
    scanf("%d",&num);

    printf("\nsum of numbers = %d\n",sum_of_numbers(num));
}

int sum_of_numbers(int n){

    if (n <=0)
        return 0;

    return sum_of_numbers(n-1) + n;

}
