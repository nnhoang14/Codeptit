#include <stdio.h>
#include <math.h>

int sumcs(int a){
    int sum=0,tg=a;
    while (tg)
    {
        sum+=tg%10;
        tg/=10;
    }
    return sum;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(sumcs(a)<=sumcs(b))printf("%d %d",a,b);
    else printf("%d %d",b,a);
    return 0;
}
