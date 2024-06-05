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

void change_column(int a[][50], int r, int ccf, int ccs){
    for(int i = 0; i < r; i++){
        sw(&a[i][ccf],&a[i][ccs]);
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
    int ccf,ccs;
    scanf("%d%d",&ccf,&ccs);
    change_column(a,r,ccf-1,ccs-1);
    output(a,c,r);
    return 0;
}
