//https://code.ptit.edu.vn/student/question/DSA04001
//LŨY THỪA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

ll lt(ll n, ll k){
    ll res = 1;
    n %= mod;
    while (k > 0) {
        if (k % 2 == 1)
            res = (res * n) % mod;
        n = (n * n) % mod;
        k /= 2;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << lt(n,k) << endl;
    }
    return 0;
}