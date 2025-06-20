#include <stdio.h>
#include <math.h>

int sofbnc(int n){
    int so0=0,so1=1,stt=0;
    while (n>=stt)
    {
        stt=so0+so1;
        so0=so1;
        so1=stt;
        if(n==stt)return 1;
        if(n<stt)return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(sofbnc(n)==1)printf("1");
    else printf("0");
    return 0;
}
