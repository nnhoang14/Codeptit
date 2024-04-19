#include <stdio.h>
#include <math.h>

int sokogiam(long long int a){
        while (a>10)
        {
            int st,ss;
            st=a%10;
            a=a/10;
            ss=a%10;
            if(st<ss){
                return 0;
                break;
            }
        }
        return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int a;
        scanf("%lld",&a);
        if(sokogiam(a))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
