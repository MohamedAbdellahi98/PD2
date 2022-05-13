#include<stdio.h>
#define S1 6
#define S2 12
    int matrix[6][12] ={
    {1,0,1,1,1,0,0,1,0,1,1,0},
    {1,0,1,1,1,1,1,0,1,0,0,0},
    {1,1,1,1,1,1,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1,1,1,1,1},
    {0,1,0,1,1,1,1,1,0,0,0,1},
    {1,1,1,0,1,1,1,1,1,1,1,1}
	};

int find_path(int i, int j);

void main(){


    int x = 6, y= 12;
	find_path(0,0);
}

int find_path(int i, int j){

    if ((i == S1-1) && (j == S2-1)){
        return 1;
    }


    if(i>=0 && j>=0 && i<S1&& j<S2 && matrix[i][j] == 1){

        printf("(%d,%d)\n",i,j);

        //going down
        if(find_path(i+1, j))
            return 1;
        //going right
        if(find_path(i, j+1))
            return 1;
        //going up
        if(find_path(i-1, j))
            return 1;
        //going left
        if(find_path(i, j-1))
            return 1;

        return 0;
    }
    return 0;
}
