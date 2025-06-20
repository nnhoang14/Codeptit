#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void input_array(int a[][100],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void arrange_array(int a[][100],int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(a[i][0]>a[j][0]){
                sw(&a[i][0],&a[j][0]);
                sw(&a[i][1],&a[j][1]);
            }
        }
    }
}

void time(int a[][100],int n){
    int t=a[0][0]+a[0][1];
    for (int i=1;i<n;i++){
        if(a[i][0]>t)t=a[i][0]+a[i][1];
        else t+=+a[i][1];
    }
    printf("%d",t);
}

int main(){
    int n,a[100][100];
    scanf("%d",&n);
    input_array(a,n);
    arrange_array(a,n);
    time(a,n);
    return 0;
}