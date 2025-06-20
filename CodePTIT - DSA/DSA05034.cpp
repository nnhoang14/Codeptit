//https://code.ptit.edu.vn/student/question/DSA05034
//TỔNG SỐ CÁCH DI CHUYỂN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        ll dp[n + 1];
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; i++){
            dp[i] = 0;
            for (int j = 1; j <= min(i, k); j++){
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}