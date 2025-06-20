#include <stdio.h>
#include <math.h>

int prime(int a){
    if(a<2)return 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i==0)return 0;
    }
    return 1;
}

void intput_cmatrix(int a[][50], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void sum_prime(int a[][50], int size){
    int sum=0;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(prime(a[i][j]))sum+=a[i][j];
        }
    }
    printf("%d",sum);
}
int main(){
    int size,a[50][50];
    scanf("%d",&size);
    intput_cmatrix(a,size);
    sum_prime(a,size);
    return 0;
}
