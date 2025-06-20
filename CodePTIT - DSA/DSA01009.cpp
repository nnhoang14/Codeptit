//https://code.ptit.edu.vn/student/question/DSA01009
//XÂU AB ĐẶC BIỆT

#include <bits/stdc++.h>
using namespace std;

bool check(string s, int k){
    int cnt = 0, t = 0;
    for(auto c : s) {
        if(c == 'A') cnt++;
        else cnt = 0;
        if(cnt >= k) t++;
        if(t > 1) break;
    }
    return t == 1;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> res;
    string s(n, 'B');
    for(int i = k - 1; i < n; i++){
        s[i] = 'A';
    }
    while (true){
        if(check(s, k)){
            res.push_back(s);
        }
        int i = n - 1;
        while (i >= 0 && s[i] == 'A'){  
            s[i] = 'B';
            i--;
        }
        if(i < 0) break;
        s[i] = 'A';
    }
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(auto &x : res){
        cout << x << endl;
    }
    return 0;
}