//https://code.ptit.edu.vn/student/question/CPP0141
//KIỂM TRA SỐ FIBONACCI

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fibo(ll n){
    if(n == 0)return 1;
    ll f0=0,f1=1,f2=f0+f1;
    while(f2 < n){
        f0=f1;
        f1=f2;
        f2=f0+f1;
    }
    if(f2 == n)return 1;
    return 0;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin>>n;
        if(fibo(n))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}