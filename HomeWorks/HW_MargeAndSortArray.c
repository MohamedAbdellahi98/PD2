#include <stdio.h>
#include<stdlib.h>
int *sort_arrays(int a1[], int n1, int a2[], int n2, int *p1, int *p2);
void print_array(int *ptr);
int i=0;
void main(void){

    int *p1, *p2;
    int a1[5]= { 1, 3, 11, 24, 32 };
    int a2[7] = {2, 4, 7, 12, 48, 5, 67 };

    p1 = a1;
    p2 = a2;

    print_array(sort_arrays( a1, 5, a2, 7, p1, p2));
}
int *sort_arrays(int a1[], int n1, int a2[], int n2, int *p1, int *p2){

    int *output = (int*)calloc( n1+n2, sizeof(int));
    int j,tmp;
    int *p=output;

    while (i < n1+n2){
        if(*p1 < *p2 && *p1 != NULL){
            *(output + i) = *p1;
            p1++;
        }else{
            *(output + i) = *p2;
            p2++;
        }
        i++;
    }

    for(i=0;i<=n1+n2;i++){
        for(j=i;j<=n1+n1;j++){
            if(*(output + j) < *(output + i)){
                tmp = *(output + i);
                *(output + i) = *(output + j);
                *(output + j) = tmp;
            }
        }
    }

    return output;
}

void print_array(int *ptr){

    for(i = 0; i<12; i++)
        printf("%d ", *(ptr+i));
    printf("\n");

}

