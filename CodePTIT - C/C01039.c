#include <stdio.h>
#include <math.h>

int main()
{
    int a,dem=0;
    scanf("%d",&a);
    while (a>0)
    {
        a=a/10;
        dem++;
    }
    printf("%d",dem);
    return 0;
}
