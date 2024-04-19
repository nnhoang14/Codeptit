#include <stdio.h>
#include <math.h>

int nt (int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int tn (int n){
    int ss=n,sm=0;
    while (ss)
    {
        sm=sm*10+ss%10;
        ss/=10;
    }
    return sm==n;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,dem=0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++){
            if(nt(i)&&tn(i)){
                dem++;
                printf("%d ",i);
                if(dem==10){
                    dem=0;
                    printf("\n");
                    }
                }
        }
        printf("\n\n");
    }
   return 0; 
}
