//https://code.ptit.edu.vn/student/question/DSA05008
//DÃY CON CÓ TỔNG BẰNG S

#include <bits/stdc++.h>
using namespace std;

int check(vector<int> &a, int n, int s) {
    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    for (int i = 0; i <= n; i++) dp[i][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (j < a[i - 1]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][s];
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        if(check(a, n, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}