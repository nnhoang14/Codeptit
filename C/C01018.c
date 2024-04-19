#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    while (a--)
    {
        int b;
        scanf("%d",&b);
        int c=sqrt(b);
        if(c*c==b)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
