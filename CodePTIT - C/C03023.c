#include <stdio.h>
#include <math.h>

int check(int a){
    int sm=0,cp=a;
    while (a>0)
    {
        int b=a%10;
        if(b==9)return 0;
        sm=sm*10+b;
        a/=10;
    }
    if(sm!=cp)return 0;
    return 1;
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(check(i)){
            dem++;
            printf("%d ",i);
            }
    }
    printf("\n%d",dem);
    return 0;
}
