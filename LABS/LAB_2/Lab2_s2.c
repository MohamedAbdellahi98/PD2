#include <stdio.h>
#include<stdlib.h>
int largest_number(int ar[],int x);
void main(){

    int a[]={1,100,10,102,5,6};

    printf("The largest Number = %d\n",largest_number(a,5));

}

int largest_number(int ar[], int x){

    int max;

    if (x<=0)
        return ar[0];

    max = largest_number(ar,x-1);

    if (ar[x] > max)
        max = ar[x];

    return max;
}
