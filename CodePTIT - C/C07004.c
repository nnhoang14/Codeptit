#include <stdio.h>

struct phanso{
  int tu;
  int mau;
};
typedef struct phanso ps;

void nhap(ps *a){
  scanf("%d%d",&a->tu,&a->mau);
}

void in(ps a){
    printf("%d/%d ",a.tu,a.mau);
}

int gcd(int a, int b){
    if(a==0||b==0)return a+b;
    while (a!=b){
        if(a>b)a-=b;
        else b-=a;
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

ps rutgon(ps a){
    ps res;
    res.tu=a.tu/gcd(a.mau,a.tu);
    res.mau=a.mau/gcd(a.mau,a.tu);
    return res;
}

void solve(){
        ps a,b,res,res_s;
        nhap(&a);
        nhap(&b);
        a=rutgon(a);
        b=rutgon(b);
        res.mau=lcm(a.mau,b.mau);
        a.tu*=res.mau/a.mau;
        a.mau=res.mau;
        b.tu*=res.mau/b.mau;
        b.mau=res.mau;
        res.tu=a.tu+b.tu;
        res_s.tu=a.tu;
        res_s.mau=b.tu;
        in(a);
        in(b);
        printf("\n");
        in(rutgon(res));
        printf("\n");
        in(rutgon(res_s));
        printf("\n");
}

int main()
{
    int test,t=1;
    scanf("%d",&test);
    while(test--){
        printf("Case #%d:\n",t);
        solve();
        t++;
    }
    return 0;
}