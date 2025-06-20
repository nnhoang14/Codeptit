#include <stdio.h>
#include <math.h>

int sostrong(int so){
    int ss,sum=0;
    ss=so;
    while (so>0)
    {
        int gt=1,n;
        n=so%10;
        for(int i=1;i<=n;i++){
            gt=gt*i;
        }
        sum+=gt;
        so/=10;
    }
    if(sum==ss)return 1;
    else return 0;
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
        if(sostrong(i)==1)printf("%d ",i);
    }
    return 0;
}
