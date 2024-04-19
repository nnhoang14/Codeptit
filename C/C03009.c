#include <stdio.h>
#include <math.h>

int shh(int so){
    int sum=0;
    for(int i=1;i<so;i++){
        if(so%i==0)sum+=i;
    }
    if(sum==so)return 1;
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
        if(shh(i)==1)printf("%d ",i);
    }
    return 0;
}
