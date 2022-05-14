#include<stdio.h>
int path[6][12];
int find_path(int a[6][12], int i, int j, int n1,int n2);
void print_Path(int path[6][12]);
void main(){
	    int matrix[6][12] ={
    {1,0,1,1,1,0,0,1,0,1,1,0},
    {1,0,1,1,1,1,1,0,1,0,0,0},
    {1,1,1,1,1,1,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1,1,1,1,1},
    {0,1,0,1,1,1,1,1,0,0,0,1},
    {1,1,1,0,1,1,1,1,1,1,1,1}
	};

	find_path(matrix,0,0,6,12);
    print_Path(path);

}

int find_path(int a[6][12], int i, int j, int n1,int n2){

    if (i == n1-1 && j == n2){
        path[i][j]=1;
        return 1;
    }

   if (a[i][j] == 1){

        path[i][j]=1;

        if (find_path(a,i,j+1,n1,n2) == 1)return 1;
        if (find_path(a,i+1,j,n1,n2) == 1)return 1;

        path[i][j]=0;
    }
    return 0;
}

void print_Path(int path[6][12]){

    for(int i=0;i<6;i++){
        for(int j=0;j<12;j++)
            if(path[i][j]==1)
                printf("(%d,%d) -> ",i,j);
	}
    printf("\n");
	for(int i=0;i<6;i++){
        for(int j=0;j<12;j++)
            printf("%d",path[i][j]);
        printf("\n");
	}

}

