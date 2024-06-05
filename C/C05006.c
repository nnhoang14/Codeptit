#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void input(int a[][50], int c, int r){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void change_row(int a[][50], int c, int crf, int crs){
    for(int i = 0; i < c; i++){
        sw(&a[crf][i],&a[crs][i]);
    }  
}

void output(int a[][50], int c, int r){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int c,r,a[50][50];
    scanf("%d%d",&r,&c);
    input(a,c,r);
    int crf,crs;
    scanf("%d%d",&crf,&crs);
    change_row(a,c,crf-1,crs-1);
    output(a,c,r);
    return 0;
}
