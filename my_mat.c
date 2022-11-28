#include<stdio.h>
#include<math.h>
#include"my_mat.h"
#define SIZE 10

int distance[SIZE][SIZE];

void prog_1(int mat[SIZE][SIZE]){

for(int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
        scanf("%d",&mat[i][j]);
    }
}
}


void prog_2(int i, int j,int mat[SIZE][SIZE]){

    if(i==j || mat[i][j]==0 ){
        printf("FALSE");
    }
    else{
        printf("TRUE");
    }
}

int min(int a, int b){
    if(a<=b){
        return a;
    }
    else return b;
}

void prog_3(int a, int b, int mat[SIZE][SIZE]){

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            if((!(i==j)) && (mat[i][j]==0)){
        mat[i][j]=pow(2,16);
            }
        }
    } 

    for(int k=0; k<SIZE; k++){
        for(int i=0; i<SIZE; i++){
            for(int j=0; j<SIZE; j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }

    if(mat[a][b]==0 || a>=SIZE || b>=SIZE || a<0|| b<0){
        printf("-1");
        
    }
    else {
    printf("%d",mat[a][b]);
    
}
}






