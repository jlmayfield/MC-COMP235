#include <stdio.h>

void mult(int lhs[][4],int rhs[][4],int prod[][4]){
    int i,j,k;
    int sum;
    for(i=0;i<4;i++){        
        for(j=0;j<4;j++){
            for(k=0;k<4 ;k++){
                prod[i][j] += lhs[i][k]*rhs[k][j];
            }            
        }        
    }
}

void printMat(int m[][4]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%3d ",m[i][j]);
        }
        printf("\n");
    }
}

void initAll(int a[][4], int b[][4], int c[][4]){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j=0; j<4; j++ ){
            c[i][j] = 0;
            a[i][j] = 4*i + j;
            b[i][j] = 16-(4*i+j);
        }
    }
}

int main(){
    int A[4][4];
    int B[4][4];
    int C[4][4];

    initAll(A,B,C);

    printMat(A);
    printf("\n");
    printMat(B);
    printf("\n");
    printMat(C);
    printf("\n");

    mult(A,B,C);
    printMat(C);


}