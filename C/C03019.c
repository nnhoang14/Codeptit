#include <stdio.h>
#include <math.h>

int check(int a){
    int sm=0,cp=a,sum=0;
    while (a>0)
    {
        sm=sm*10+a%10;
        sum+=a%10;
        a/=10;
    }
    if(sm!=cp)return 0;
    if(sum%10!=0)return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,sd,sc,dem=0;
        scanf("%d",&a);
        sd=pow(10,a-1);
        sc=pow(10,a);
        for(int i=sd;i<sc;i++){
            if(check(i))dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
