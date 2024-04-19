#include <stdio.h>
#include <math.h>

int tn(long long int n){
    long long int sm=0,a=n;
    while (n)
    {
        sm=sm*10+n%10;
        n/=10;
    }
    if(sm==a)return 1;
    else return 0;
}
int check(long long int n){
    int sc=n%10,sd;
    long long int sm=0;
    n/=10;
     while (n>=10)
    {
        sm=sm*10+n%10;
        n/=10;
    }
    sd=n;
    if(sd*2==sc||sc*2==sd){
        if(tn(sm))return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int a;
        scanf("%lld",&a);
        if(check(a))printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
