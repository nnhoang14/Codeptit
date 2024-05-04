#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void arange_cmatrix(int cmatrix[],int len){
    for(int i=0;i<len-1;i++){
        if(cmatrix[i]>cmatrix[i+1]){
            sw(&cmatrix[i],&cmatrix[i+1]);
        }
    }
}

int check(int cmatrix[],int len){
    for(int i=0;i<len-1;i++){
        if(cmatrix[i]>cmatrix[i+1])return 0;
    }
    return 1;
}

void input_cmatrix(int cmatrix[],int len){
    for(int i=0;i<len;i++){
        scanf("%d",&cmatrix[i]);
    }
}

void output_cmatrix(int cmatrix[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",cmatrix[i]);
    }
}

int main(){
    int len;
    scanf("%d",&len);
    int cmatrix[len],step=1;
    input_cmatrix(cmatrix,len);
    while(step<=len){
        printf("Buoc %d: ",step);
        arange_cmatrix(cmatrix,len);
        output_cmatrix(cmatrix,len);
        if(check(cmatrix,len))break;
        printf("\n");
        step++;
    }
    return 0;
}