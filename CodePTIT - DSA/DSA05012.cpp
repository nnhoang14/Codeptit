//https://code.ptit.edu.vn/student/question/DSA05012
//TỔ HỢP C(n, k)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll C(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k == 1 || k == n - 1) return n;
    
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
        dp[i][1] = i;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }
    return dp[n][k];
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << C(n, k) << endl;
    }
    return 0;
}