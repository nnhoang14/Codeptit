#include <stdio.h>

int main(){
    int u0,d,N;
    scanf("%d%d%d",&u0,&d,&N);
    long long res=(N*(2*u0+(N-1)*d))/2;
    printf("%lld",res);
}