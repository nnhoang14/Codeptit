#include <stdio.h>
#include <math.h>

int scdb(long long int n){
    int a;
    if(n%2==0){
        while (n)
        {
            a=n%10;
            n/=10;
            if(a%2!=0)return 0;
        }
        return 1;
    }
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int a;
        scanf("%lld",&a);
        if(scdb(a))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
