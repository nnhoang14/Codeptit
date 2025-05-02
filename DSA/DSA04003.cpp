//https://code.ptit.edu.vn/student/question/DSA04003
//ĐẾM DÃY

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 123456789;

ll lt(int a, int b){
    a %= MOD;
    ll res = 1;
    while (b > 0){
        if(b % 2 != 0)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << lt(2, n - 1) << endl;
    }
    return 0;
}