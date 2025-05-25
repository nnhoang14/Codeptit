//https://code.ptit.edu.vn/student/question/DSA04025
//DÃY SỐ VÔ HẠN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;
void mulMatrix(vector<vector<ll>> &mt1, vector<vector<ll>> &mt2){
    ll x = mt1[0][0] * mt2[0][0] + mt1[0][1] * mt2[1][0];
    ll y = mt1[0][0] * mt2[0][1] + mt1[0][1] * mt2[1][1];
    ll z = mt1[1][0] * mt2[0][0] + mt1[1][1] * mt2[1][0];
    ll w = mt1[1][0] * mt2[0][1] + mt1[1][1] * mt2[1][1];

    mt1[0][0] = x % MOD;
    mt1[0][1] = y % MOD;
    mt1[1][0] = z % MOD;
    mt1[1][1] = w % MOD;
}

void matrixPower(vector<vector<ll>> &mt1, ll n){
    if(n == 0 || n == 1) return;
    vector<vector<ll>> mt2 = {{1, 1}, {1, 0}};
    matrixPower(mt1, n/2);
    mulMatrix(mt1, mt1);
    if(n % 2 != 0)
        mulMatrix(mt1, mt2);
}

ll fibo(int n){
    if(n <= 1) return n;
    vector<vector<ll>> mt1 = {{1, 1}, {1, 0}};
    matrixPower(mt1, n - 1);
    return mt1[0][0];
}

int main() {
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll res = fibo(n);
        cout << res << endl;
    }
    return 0;
}