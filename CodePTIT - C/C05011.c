#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void input(int ma[][100], int newma[][100],int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&ma[i][j]);
            newma[j][i] = ma[i][j];
        }
    }
}

void multiply_matrix(int ma[][100], int newma[][100], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < r; j++){
            int sum=0;
            for(int k = 0; k < c; k++){
            sum+=ma[i][k]*newma[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}

int main()
{
    int test,times=1;
    scanf("%d",&test);
    while (test--){
        int r,c,ma[100][100],newma[100][100];
        scanf("%d%d",&r,&c);
        input(ma,newma,r,c);
        printf("Test %d:\n",times);
        multiply_matrix(ma,newma,r,c);
        times++;
    }
    return 0;
}