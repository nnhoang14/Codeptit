#include <stdio.h>
#include <math.h>

int nt(long long int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int sumcs(long long int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int sumnt(long long int n){
    int sum=0;
    for(int i=2;i<=n;i++){
        while(n>1){
            if(nt(i)&&n%i==0){
                sum+=sumcs(i);
                n/=i;
            }
            else break;
        }
    }
    return sum;
}
int main(){
    long long int n,tg;
    scanf("%lld",&n);
    if(sumcs(n)==sumnt(n))printf("YES");
    else printf("NO");
    return 0;
}
