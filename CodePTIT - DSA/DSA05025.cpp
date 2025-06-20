//https://code.ptit.edu.vn/student/question/DSA05025
//CON ẾCH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll dp[n + 1];
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = 0;
            for(int j = 1; j <= min(i, 3); j++){
                dp[i] += dp[i - j];
            }
        }
        cout << dp[n] << endl;
    }
}