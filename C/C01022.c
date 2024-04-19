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
        printf("%d\n",sum);
    }
 
    return 0;
}
