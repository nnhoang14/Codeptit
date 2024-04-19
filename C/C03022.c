#include <stdio.h>
#include <math.h>

int nt(int a){
    if(a<2)return 0;
    for (int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)return 0;
    }
    return 1;
}
int check(int a){
    int sum=0,sc;
    if(nt(a)==0)return 0;
    while (a>0)
    {
        sum+=a%10;
        a/=10;
    }
    if(sum%5==0)return 1;
    return 0;
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(check(i)){
            dem++;
            printf("%d ",i);
            }
    }
    printf("\n%d",dem);
    return 0;
}
