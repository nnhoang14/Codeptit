#include <stdio.h>
#include <math.h>

int tnt(long long int n){
    long long int sm=0,a=n,sum=0,dem=0;
    while(n){
        sum+=n%10;
        if((n%10)==4)dem++;
        sm=sm*10+n%10;
        n/=10;
    }
    if(sm==a&&sum%10==0&&dem==0)return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a,dau,cuoi;
        scanf("%lld",&a);
        dau=pow(10,a-1);
        cuoi=pow(10,a);
        for(long long int i=dau;i<cuoi;i++){
            if(tnt(i))printf("%lld ",i);
        }
        printf("\n");
    }

    return 0;
}
