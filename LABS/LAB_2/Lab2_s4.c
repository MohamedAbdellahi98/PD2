#include <stdio.h>
int largest_common_divisor(int,int);
void main(){

    int N1, N2, tmp;

    printf("please Number 1:");
    scanf("%d",&N1);
    printf("\nplease Number 2:");
    scanf("%d",&N2);

    if(N1 < N2){
    tmp = N1;
    N1 = N2;
    N2 = tmp;
    }

    printf("\nThe largest common divisor = %d\n",largest_common_divisor(N1,N2));

}

int largest_common_divisor(int a, int b){

    int C;

    C = a % b;

    if(C==0)
        return b;
    else{
        a = b;
        b = C;
    }
    largest_common_divisor(a,b);
}
