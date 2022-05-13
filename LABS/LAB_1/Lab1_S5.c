#include <stdio.h>
float Cercel_Area();
float PI=3.14;
void main(){

    int r;

    printf("Plese Enter Radius: ");
    scanf("%d",&r);

    printf("\nYour Cercel Areas is: %.2f\n ",Cercel_Area(r));
}

float Cercel_Area(int r){

    float Area;
    Area = PI * (float)r * (float)r ;
    return Area;
}

