#include <stdio.h>
#include <math.h>

int fbnc(int n){
    int so0=0,so1=1,stt=0;
    while (n>=stt)
    {
        stt=so0+so1;
        so0=so1;
        so1=stt;
        if(stt==n) return 1;
    }
    return 0;
}
int nt(int n){
    if(n<2) return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int sumcs(int n){
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int a,b,tg;
    scanf("%d%d",&a,&b);
    tg=a;
    if(a>b){
        a=b;
        b=tg;
    }
    for(int i=a;i<=b;i++){
        if(fbnc(sumcs(i))&&nt(i))printf("%d ",i);
    }
    return 0;
}
