#include <stdio.h>
#include <math.h>

int sogiam(long long int n){
    int a=n%10,b;
    n/=10;
    while(n){
        b=n%10;
        if(b<=a)return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a,b,tg;
        int dem=0;
        scanf("%lld%lld",&a,&b);
        tg=a;
        if(a>b){
            a=b;
            b=tg;
        }
        for(long long int i=a;i<=b;i++){
            if(sogiam(i))dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
