#include <stdio.h>
#include <math.h>

int main()
{
    int a,sd,sc,tg,dem=0;
    scanf("%d",&a);
    tg=a;
    sc=a%10;
    while (a>=10)
    {
        dem++;
        a/=10;
    }
    sd=a;
    tg=tg-sd*pow(10,dem)-sc+sd+sc*pow(10,dem);
    printf("%d",tg);
    return 0;
}
