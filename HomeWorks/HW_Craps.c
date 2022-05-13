#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(void){

    int x, y, i;
    int k=0;
    char ch;

    srand(time(0));

    printf("Roll two dice\n");
    while ((ch = getchar()) != '\n'){
        printf("\n**Please press ENTER to roll the dice**\n");
        exit(0);
    }

    x = 1 + rand() % (6);
    y = 1 + rand() % (6);
    k = x + y;

    if (k==7 || k==11){
        printf("dice 1 = %d\ndice 2 = %d\n",x,y);
        printf("dice 1 + dice 2 = %d point\n",k);
        printf("\t!!!Win!!!\nYou won from the first time\n\t!!!Win!!!");
    }
    else if(k==2 || k==3 || k==12){
        printf("dice 1 = %d\ndice 2 = %d\n",x,y);
        printf("dice 1 + dice 2 = %d point\n",k);
        printf("\t!!!Lost!!!\nYou Lost from the first time\n\t!!!Lost!!!");
    }
    else {
        while (k!=7){
            printf("dice 1 = %d\ndice 2 = %d\n",x,y);
            printf("dice 1 + dice 2 = %d point\n",k);
            printf("\nRoll two dice Again\n");
            while ((ch = getchar()) != '\n'){
                printf("\n**Please press ENTER to roll the dice**\n");
                exit(0);
            }
            x = 1 + rand() % (6);
            y = 1 + rand() % (6);
            k = x + y;
            srand(time(0));
        }
        printf("dice 1 = %d\ndice 2 = %d\n",x,y);
        printf("dice 1 + dice 2 = %d point\n",k);
        printf("\t!!!Win!!!\nYou win\n\t!!!Win!!!\n");
    }
}
