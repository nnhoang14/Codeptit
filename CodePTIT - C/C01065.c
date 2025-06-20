#include <stdio.h>
#include <math.h>

int nt(long long int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int demnt(long long int a,int b){
    int dem=0,c;
    while(a){
        c=a%10;
        if(c==b)dem++;
        a/=10;
    }
    return dem;
}
int main(){
    long long int n,tg;
    scanf("%lld",&n);
    for(int i=2;i<=7;i++){
        if(nt(i)&&demnt(n,i)!=0){
            printf("%d %d\n",i,demnt(n,i));
        }
    }
    return 0;
}
