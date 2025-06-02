//https://code.ptit.edu.vn/student/question/DSA_P029
//HÀNH TRÌNH DU LỊCH - 1

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n;
vector<vector<int>> cost, dp;

int solve() {
    int full = (1 << n);
    for (int i = 0; i < n; i++) {
        dp[1 << i][i] = 0;
    }
    for (int mask = 0; mask < full; mask++) {
        for (int u = 0; u < n; u++) {
            if (!(mask & (1 << u))) continue;
            for (int v = 0; v < n; v++) {
                if (mask & (1 << v) && v != u) {
                    dp[mask][u] = min(dp[mask][u], dp[mask ^ (1 << u)][v] + cost[v][u]);
                }
            }
        }
    }
    int res = INF;
    for (int u = 0; u < n; u++) {
        res = min(res, dp[full - 1][u]);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t-- ){
        cin >> n;
        dp.assign(1 << n, vector<int>(n, INF));
        cost.assign(n, vector<int>(n));
        for (auto &i : cost)
            for (auto &j : i)
                cin >> j;
        cout << solve() << endl;
    }
    return 0;
}