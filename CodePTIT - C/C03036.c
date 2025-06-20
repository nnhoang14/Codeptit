#include <stdio.h>
#include <math.h>

int tn(long long int n){
    long long int sm=0,tg=n;
    while (n)
    {
        sm=sm*10+n%10;
        n/=10;
    }
    if(sm==tg)return 1;
    else return 0;
}
int tcs(long long int n){
    int sum=0;
    while (n)
    {
        sum=sum+n%10;
        n/=10;
    }
    if(sum%2==0)return 0;
    else return 1;
}
int csl(long long int n){
    int sm;
    while (n)
    {
        sm=n%10;
        n/=10;
        if(sm%2==0)return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int a;
        scanf("%lld",&a);
        if(tn(a)&&tcs(a)&&csl(a))printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
