//https://code.ptit.edu.vn/student/question/DSA05008
//DÃY CON CÓ TỔNG BẰNG S

#include <bits/stdc++.h>
using namespace std;

int check(vector<int> &a, int n, int s) {
    vector<bool> dp(s + 1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++)
      for(int j = s; j >= a[i]; j --)
        if(dp[j - a[i]]) dp[j] = true;
    return dp[s];
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