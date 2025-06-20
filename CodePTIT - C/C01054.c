#include <stdio.h>
#include <math.h>
#define lmt 2000000 // lmt: limit

int a[lmt+1]={0};
void chia(){
    for (int i=2;i*i<=lmt;i++){
        if(a[i]==0){
            for(int j=i*i;j<=lmt;j+=i){
                if(a[j]==0)a[j]=i;
            }
        }
    }
    for (int i=2;i<=lmt;i++){
        if(a[i]==0)a[i]=i;
    }
}
int tsu(int n){
    int sum=0;
    while(n!=1){
        sum+=a[n];
        n/=a[n];
    }
    return sum;
}
int main()
{
    chia();
    int n;
    long long t=0;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        t+=tsu(a);
    }
    printf("%lld",t);
    return 0;
}
