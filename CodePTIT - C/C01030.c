#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        for(int i=2;i<=a;i++){
            while(a>0)
            {
                if(a%i==0){
                    printf("%d ",i);
                    a=a/i;
                    }
                else break;
            }
        }
        printf("\n");    
    }
    return 0;
}
