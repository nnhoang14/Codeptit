#include <stdio.h>
#include <math.h>

int nt(long long int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a,b,dem=0,dau,cuoi;
        scanf("%lld%lld",&a,&b);
        dau=sqrt(a);
        cuoi=sqrt(b);
        for(long long int i=dau;i<=cuoi;i++){
            if(nt(i))dem++;
        }
        printf("%lld\n",dem);
    }
    return 0;
}
