#include <stdio.h>
#include <math.h>

void ucln(int a,int b){
    int max=1;
    long long int min=(long long)a*b;
    for(int i=1;i<=a;i++){
        if(a%i==0&&b%i==0)max=i;
    }
    min=min/max;
    printf("%lld %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,tg;
        scanf("%d%d",&a,&b);
        tg=a;
        if(a>b){
            a=b;
            b=tg;
        }
        ucln(a,b);
        printf("\n");
    }
    return 0;
}
