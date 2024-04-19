#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int tg=a;
    if(a>b){
        a=b;
        b=tg;
    }
    int bd=sqrt(a),kt=sqrt(b);
    float ss=sqrt(a);
    if(bd<ss)bd++;
    printf("%d\n",kt-bd+1);
    for(int i=bd;i<=kt;i++)printf("%d\n",i*i);
    return 0;
}
