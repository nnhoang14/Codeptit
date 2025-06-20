#include <stdio.h>
#include <math.h>

int nt(int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int check(int n){
    int a;
    while(n){
        a=n%10;
        n/=10;
        if(nt(a)==0)return 0;
    }   
    return 1;
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
            if(nt(i)&&check(i))dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
