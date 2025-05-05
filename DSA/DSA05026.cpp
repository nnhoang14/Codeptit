//https://code.ptit.edu.vn/student/question/DSA05026
//XEM PHIM

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int c, n;
    cin >> c >> n;
    vector<int> cow(n);
    for(auto &x : cow) cin >> x;
    vector<int> dp(c + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = c; j >= cow[i]; j--){
            dp[j] += dp[j - cow[i]];
        }
    }
    for(int i = c; i >= 0; i--){
        if(dp[i]){
            cout << i << endl;
            break;
        } 
    }
    return 0;
}