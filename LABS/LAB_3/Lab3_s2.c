#include<stdio.h>
int caunt_odd(int a[], int n);

void main(){

    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d",caunt_odd(arr,n));

}
int caunt_odd(int a[], int n){

    if (n <=0 )
        return;

    int x = caunt_odd(a,n-1);

    if (a[n-1] % 2 != 0) return x+1;

    return x;
}
