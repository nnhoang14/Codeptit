#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    int tg=a;
    if(a>b){
        a=b;
        b=tg;
    }
    for(int i=a;i<=b;i++)sum+=i;
    printf("%d",sum);
    return 0;
}
