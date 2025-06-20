#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void intput_cmatrix(int a[][50], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void sw_Diagonal(int a[][50], int size){
    for(int i = 0; i < size; i++){
        sw(&a[i][i],&a[i][size-1-i]);
    }
}

void output_cmatrix(int a[][50], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int size,a[50][50];
    scanf("%d",&size);
    intput_cmatrix(a,size);
    sw_Diagonal(a,size);
    output_cmatrix(a,size);
    return 0;
}