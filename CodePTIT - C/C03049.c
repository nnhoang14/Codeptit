#include <stdio.h>
#include <math.h>

int check (long long int n){
    int c=0,l=0,a;
    while(n){
        a=n%10;
        n/=10;
        if(a%2==0)c++;
        else l++;
    }
    if(l>c) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a;
        scanf("%lld",&a);
        if(a%2!=0&&check(a))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
