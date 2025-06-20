#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;

ll min(char a[],char b[]){
    ll t1=0,t2=0;
    for(int i=0;i<strlen(a);i++){
        int x=a[i]-'0';
        if(x==6)x=5;
        t1=t1*10+x;
    }
    for(int i=0;i<strlen(b);i++){
        int x=b[i]-'0';
        if(x==6)x=5;
        t2=t2*10+x;
    }
    return t1+t2;
}
ll max(char a[],char b[]){
    ll t1=0,t2=0;
    for(int i=0;i<strlen(a);i++){
        int x=a[i]-'0';
        if(x==5)x=6;
        t1=t1*10+x;
    }
    for(int i=0;i<strlen(b);i++){
        int x=b[i]-'0';
        if(x==5)x=6;
        t2=t2*10+x;
    }
    return t1+t2;
}
void solve(){
    char a[20],b[20];
    scanf("%s%s",&a,&b);
    printf("%lld  %lld\n",min(a,b),max(a,b));
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
        solve();
    return 0;
}
