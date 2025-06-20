#include <stdio.h>
#include <math.h>

int check(int a){
    int sm=0,cp=a,sum=0,sc,dem=0;
    while (a>0)
    {
        int c=a%10;
        if(c==6)dem++;
        sm=sm*10+c;
        sum+=c;
        a/=10;
    }
    sc=sum%10;
    if(sm!=cp)return 0;
    if(dem==0)return 0;
    if(sc!=8)return 0;
    return 1;
}
int main()
{
    int a,b,tg;
    scanf("%d%d",&a,&b);
    tg=a;
    if(a>b){
        a=b;
        b=tg;
    }
    for(int i=a;i<=b;i++){
        if(check(i))printf("%d ",i);
    }
    return 0;
}
