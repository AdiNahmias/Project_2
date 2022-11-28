#include<stdio.h>
#include<math.h>
#define SIZE 10


void prog_1(){

int mat[SIZE][SIZE];

for(int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
        scanf("%d",&mat[i][j]);
    }
}
prog_3();
}


void prog_2(){

    int i,j;
    scanf("%d%d",&i,&j);

    if(i==j || mat[i][j]==0 ){
        printf("False");
    }
    else{
        printf("True");
    }
}

int min(int a, int b){
    if(a<=b){
        return a;
    }
    else return b;
}

void prog_3(){

    int a,b;
    scanf("%d%d",&a,&b);


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

    if(mat[a][b]==0 || a==b){
        printf("-1");
        
    }
    else {
    printf("%d",mat[a][b]);
    
}
}






