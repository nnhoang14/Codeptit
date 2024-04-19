#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        int bd=a%10,kt;
        while (a>0)
        {
        if(a/10==0)kt=a;
        a=a/10;
        }
        if(kt==bd)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
