#include<stdio.h>
#include<math.h>
#include"my_mat.h"
#define SIZE 10

int distance[SIZE][SIZE];

//Inserting the matrix values
void prog_1(int mat[SIZE][SIZE]){

//printf("Please insert the arc weight from one vertex to the other: ");
//printf("\n");
for(int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
        //printf("Please enter the distance from %d to %d:",i,j);
        scanf("%d",&distance[i][j]);
    }
}
}
//Print the distances

// printf("The distances from all vertices are: ");
// printf("\n");
// for(int i = 0; i<SIZE; i++){
//     printf("vertex %d: ",i);
//     printf("\n");
//     for(int j=0; j<SIZE; j++){
//         printf("%d",distance[i][j]);
//         printf("\n");
//     }

// }


void prog_2(int i, int j,int mat[SIZE][SIZE]){

    if(i==j || distance[i][j]==0 ){
        printf("FALSE");
        printf("\n");  
    }
    else{
        printf("TRUE");
        printf("\n");
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
            if((!(i==j)) && (distance[i][j]==0)){
        distance[i][j]=pow(2,16);
            }
        }
    } 

    for(int k=0; k<SIZE; k++){
        for(int i=0; i<SIZE; i++){
            for(int j=0; j<SIZE; j++){
                distance[i][j]=min(distance[i][j],distance[i][k]+distance[k][j]);
            }
        }
    }

    if(distance[a][b]==0 || a>=SIZE || b>=SIZE || a<0|| b<0){
        printf("-1");
        printf("\n");
    }
    else {
    printf("The shortest route between vertex %d and vertex %d is: %d",a,b,distance[a][b]);
    printf("\n");
}
}





