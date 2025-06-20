#include <stdio.h>
#include <math.h>

int shh(int so){
    int sum=0;
    for(int i=1;i<=sqrt(so);i++){
        if(so!=i && so%i==0)sum+=i;
        if(so!=(so/i) && so%(so/i)==0)sum+=so/i;
    }
    if(sum==so)return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(shh(i))printf("%d ",i);
    }
    return 0;
}
