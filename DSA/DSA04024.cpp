//https://code.ptit.edu.vn/student/question/DSA04024
//LŨY THỪA MA TRẬN 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll n, k;
vector<vector<ll>> a , d;

void mulMatrix(vector<vector<ll>> &mt1, vector<vector<ll>> &mt2){
    vector<vector<ll>> res (n, vector<ll> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                res[i][j] += mt1[i][k] * mt2[k][j];
                res[i][j] %= MOD;
            }
        }
    }
    mt1 = res;
}

void Pow(vector<vector<ll>> &a, ll k){
    if(k == 1) return;
    Pow(a, k/2);
    mulMatrix(a, a);
    if(k % 2 != 0)mulMatrix(a, d);
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        a.assign(n, vector<ll>(n));
        for(auto &i : a)
            for(auto &j : i)
                cin >> j;
        d = a;
        Pow(a, k);
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i][n - 1];
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}