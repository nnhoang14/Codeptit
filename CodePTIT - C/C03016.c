#include <stdio.h>
#include <math.h>

int sofbnc(long long int n){
    long long int so0=0,so1=1,stt=0;
    if(n==0)return 1;
    while (n>=stt)
    {
        stt=so0+so1;
        so0=so1;
        so1=stt;
        if(n==stt)return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a;
        scanf("%lld",&a);
        if(sofbnc(a))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
