#include <stdio.h>
#include <math.h>

void ucln(int n,int k){
    int max=1;
    long long int min=(long long)n*k;
    for(int i=1;i<=n;i++){
        if(n%i==0&&k%i==0){
            max=i;
        }
    }
    min=min/max;
    printf("%d\n%lld",max,min);
}
int main()
{
    int n,k,tg;
    scanf("%d%d",&n,&k);
    tg=n;
    if(n>k){
        n=k;
        k=tg;
    }
    ucln(n,k);
    return 0;
}
