#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d ",&a);
        printf("%lld\n",(long long)a*a);
    }
    return 0;
}
