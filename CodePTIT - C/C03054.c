#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int a,sm=0;
        int d=0,m=0,s=0;
        scanf("%lld",&a);
        long long int cp=a;
        while (cp)
        {
            cp/=10;
            d++;
        }
        while (d--)
        {
            int b=a%10;
            if(b==0||b==8||b==9)sm+0;
            else if(b==1)sm=pow(10,m)+sm;
            else   {
                s++;
                break;
            }
            m++;
            a/=10;
        }
        if(sm!=0&&s==0)printf("%lld\n",sm);
        else printf("INVALID\n");
    }
    return 0;
}
