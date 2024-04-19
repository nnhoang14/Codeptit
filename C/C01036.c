#include <stdio.h>
#include <math.h>

int main()
{
    int a,sum=1;
    scanf("%d",&a);
    while (a>0)
    {
        sum=sum*(a%10);
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}
