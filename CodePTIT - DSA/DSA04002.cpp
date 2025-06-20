//https://code.ptit.edu.vn/student/question/DSA04002
//LŨY THỪA ĐẢO

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

ll lt(ll n, ll k){
    if (k == 0) return 1;
    long long x = lt(n, k / 2);
    if (k % 2 == 0) return (x * x) % mod;
    return (n * ((x * x) % mod)) % mod;
}

ll rev(ll n) {
    ll res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << lt(n, rev(n)) << endl;
    }
    return 0;
}