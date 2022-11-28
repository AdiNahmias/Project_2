#include<stdio.h>
#include<math.h>
#include"my_mat.h"
#define SIZE 10

int main(){

    int distance[SIZE][SIZE];
    char c='R';
    scanf("%c",&c);

    while(c!='D'){
        if(c =='A'){
            prog_1(distance);
        }
        else if(c =='B'){
            int i=0;
            int j=0;
            //printf("Please enter 2 vertices: ");
            scanf("%d%d",&i,&j);
            prog_2(i,j,distance);
        }
        else if(c =='c'){
            int i=0;
            int j=0;
            //printf("Please enter 2 vertices: ");
            scanf("%d%d",&i,&j);
            prog_3(i,j,distance);
        }
    }

    return 0;

}