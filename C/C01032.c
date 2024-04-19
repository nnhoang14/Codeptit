#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,t=1;
        scanf("%d",&a);
        for(int i=2;i<=a;i++){
            while(a>0)
            {
                if(a%i==0&&t%i!=0){
                    t*=i;
                    a=a/i;
                    }
                else if(a%i==0&&t%i==0)a=a/i;
                else break;
            }
        }
        printf("%d\n",t);    
    }
    return 0;
}
