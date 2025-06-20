//https://code.ptit.edu.vn/student/question/DSA03035
//SẮP XẾP ĐƠN GIẢN

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> dp(n + 1, 0);
    int maxlen = 0;
    for (int i = 0; i < n; ++i) {
        dp[a[i]] = dp[a[i] - 1] + 1;
        maxlen = max(maxlen, dp[a[i]]);
    }
    cout << n - maxlen;
}
