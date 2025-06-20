//https://code.ptit.edu.vn/student/question/DSAKT055
//BÀI TOÁN CÁI TÚI 0-1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, v;
        cin >> n >> v;
        vector<int> w(n);
        vector<int> val(n);
        for(auto &x : w) cin >> x;
        for(auto &x : val) cin >> x;
        vector<vector<int>> dp(n + 1, vector<int>(v + 1, 0));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= v; j++){
                dp[i][j] = dp[i - 1][j];
                if (j >= w[i - 1]){
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + val[i - 1]);
                }
            }
        }
        cout << dp[n][v] << endl;
    }    
    return 0;
}