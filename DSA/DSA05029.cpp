//https://code.ptit.edu.vn/student/question/DSA05029
//GIẢI MÃ

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= n; i++){
            if(s[i - 1] != '0') dp[i] += dp[i - 1];
            if(i >= 2){
                int twoDigit = stoi(s.substr(i - 2, 2));
                if(twoDigit >= 10 && twoDigit <= 26)
                    dp[i] += dp[i - 2];
            }
        }
        cout << dp[n] << endl;
    }
}