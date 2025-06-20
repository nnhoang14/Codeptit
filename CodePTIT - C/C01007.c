#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0)printf("0");
    else{
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%lld\n",(long long)a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    printf("%.2f",(float)a/b);
    }
    return 0;
}
