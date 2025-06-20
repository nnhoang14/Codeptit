#include <stdio.h>
#include <math.h>

int main()
{
    int n,ss,sum=0;
    scanf("%d",&n);
    ss=n;
    while (n>0)
    {

        int gt=1,a;
        a=n%10;
        for(int i=1;i<=a;i++){
            gt=gt*i;
        }
        sum+=gt;
        n/=10;
    }
    if(sum==ss)printf("1");
    else printf("0");
    return 0;
}
