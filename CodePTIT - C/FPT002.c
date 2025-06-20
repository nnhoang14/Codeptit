#include <stdio.h>

void input(int a, int b, int cmatrix[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&cmatrix[i][j]);
        }
    }
}

void multiply_cmatrix(int a,int b,int c,int cmatrix_f[a][b],int cmatrix_b[b][c],int cmatrix_result[a][c]){
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<b;k++){
                cmatrix_result[i][j]+=cmatrix_f[i][k]*cmatrix_b[k][j];
            }
        }
    }
}

void output(int a, int b, int cmatrix[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",cmatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
	int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int cmatrix_f[a][b],cmatrix_s[b][c],cmatrix_t[c][d],cmatrix_result_f[100][100]={0},cmatrix_result_s[100][100]={0};
    input(a,b,cmatrix_f);
    input(b,c,cmatrix_s);
    input(c,d,cmatrix_t);
    multiply_cmatrix(a,b,c,cmatrix_f,cmatrix_s,cmatrix_result_f);
    multiply_cmatrix(a,c,d,cmatrix_result_f,cmatrix_t,cmatrix_result_s);
    output(a,d,cmatrix_result_s);
	return 0;
}