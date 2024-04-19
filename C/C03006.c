#include <stdio.h>
#include <math.h>

int main()
{
    int n,bt=1;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        printf("Test %d: ",bt);
        scanf("%d",&a);
        for(int i=2;i<=a;i++){
            int dem=0;
            while(a>0)
            {
                if(a%i==0){
                    dem++;
                    a=a/i;
                    }
                else break;
            }
            if(dem>0)printf("%d(%d) ",i,dem);
        }
        bt++;
        printf("\n");    
    }
    return 0;
}
