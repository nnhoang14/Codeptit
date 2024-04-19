#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,dem=0;
        scanf("%d",&a);
        for(int i=1;i<=sqrt(a);i++){
            if(a%i==0 && i%2==0)dem++;
            if(i!= (a/i) && a%(a/i)==0 && (a/i)%2==0) dem++;
        }
        printf("%d\n", dem);
    }
    return 0;
}
