#include <stdio.h>
#include <math.h>

void sofbnc(int n){
    int so0=0,so1=1,stt=0;
    if(n==1)printf("%d",so0);
    if(n>=2){
        printf("%d %d ",so0,so1);
        n=n-2;
        while (n--)
        {
            stt=so0+so1;
            so0=so1;
            so1=stt;
            printf("%d ",stt);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    sofbnc(n);
    return 0;
}
