#include <stdio.h>
#include <math.h>

int nt(int n){
    if(n<2)return 0;
    else for(int i=2;i<sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n,bt=1;
    scanf("%d",&n);
    while (n--)
    {
        int a,tg;
        scanf("%d",&a);
        tg=a;
        printf("%d = ",a);
        for(int i=2;i<=a;i++){
            int dem=0;
            while (tg>0)
            {
                if(nt(i)&&tg%i==0){
                    dem++;
                    tg/=i;
                }
                else break;
            }
            if(dem>0)printf("%d^%d ",i,dem);
            if(tg!=1&&dem>0)printf("* ");
            if(tg==1)break;
        }
        printf("\n");    
    }
    return 0;
}
