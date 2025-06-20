//https://code.ptit.edu.vn/student/question/DSA_P039
//CHỌN Ô - 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for(auto &i : a)
            for(auto &j : i)
                cin >> j;

        int size = 1 << n;
        vector<int> dp(size, INT_MIN);
        dp[0] = 0;

        for(int mask = 0; mask < size; mask++){
            int row = __builtin_popcount(mask);
            if (row == n) continue;

            for(int j = 0; j < n; j++){
                if (!(mask & (1 << j))){
                    int new_mask = mask | (1 << j);
                    dp[new_mask] = max(dp[new_mask], dp[mask] + a[row][j]);
                }
            }
        }
        cout << dp[size - 1] << endl;
    }
    return 0;
}