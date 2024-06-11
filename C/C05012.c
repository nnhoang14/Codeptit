#include <stdio.h>

void input(int ma[][100], int newma[][100],int s){
    for(int i = 0; i < s; i++){
        for(int j = 0; j < i+1; j++){
            ma[i][j]=j+1;
            newma[j][i] = ma[i][j];
        }
    }
}

void multiply_matrix(int ma[][100], int newma[][100], int s){
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            int sum=0;
            for(int k = 0; k < s; k++){
            sum+=ma[i][k]*newma[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}

int main(){
   int test,times=1;
    scanf("%d",&test);
    while (test--){
        int s,ma[100][100]={0},newma[100][100]={0};
        scanf("%d",&s);
        input(ma,newma,s);
        printf("Test %d:\n",times);
        multiply_matrix(ma,newma,s);
        times++;
    }
    return 0;
}