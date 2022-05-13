#include <stdio.h>

int sum_of_digit(int);

void main(){

    int num;

    printf("Please Number: ");
    scanf("%d",&num);

    printf("\nsum of numbers = %d\n",sum_of_digit(num));
}

int sum_of_digit(int n){

    if (n <=0)
        return 0;

    return sum_of_digit(n/10) + n % 10;

}
