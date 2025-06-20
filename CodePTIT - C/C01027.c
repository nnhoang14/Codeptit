#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,ucln=0;
        scanf("%d %d",&a,&b);
        int tg=a;
        if(a<b){
            a=b;
            b=tg;
        }
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0)ucln=i;
        }
        printf("%d\n",ucln);
    }
   return 0; 
}
