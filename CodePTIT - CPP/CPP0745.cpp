//https://code.ptit.edu.vn/student/question/CPP0745
//TÍNH SỐ FIBONACCI LỚN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll const mod = 1e9 + 7;
ll fibo(int n){
    if(n == 0)return 0;
    if(n == 1)return 1;
    ll a = 0, b = 1, c;
    for(int i = 2; i <= n; i++){
        c = (a + b)%mod;
        a= b;
        b= c;
    }
    return b;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}