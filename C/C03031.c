#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
    int max=1,tg=a;
    if(a>b){
        a=b;
        b=tg;
    }
    for(int i=1;i<=a;i++){
        if(a%i==0&&b%i==0)max=i;
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(ucln(a,b)==ucln(c,d))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
