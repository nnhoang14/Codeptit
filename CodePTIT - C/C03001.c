#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,sum=0;
        scanf("%d",&a);
        while (a>0)
        {
            sum=sum+a%10;
            a=a/10;
        }
        if(sum%10==0)printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
