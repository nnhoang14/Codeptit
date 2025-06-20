//https://code.ptit.edu.vn/student/question/DSA06008
//ĐẾM CẶP

#include <bits/stdc++.h>
using namespace std;

int countPairs(int n, vector<int> &Y, vector<int> &freq){
    if(n == 0) return 0;
    if(n == 1) return freq[0];
    int res = Y.end() - upper_bound(Y.begin(), Y.end(), n);
    res += freq[0] + freq[1];
    if(n == 2) res -= freq[3] + freq[4];
    if(n == 3) res += freq[2];
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, cnt = 0;
        cin >> n >> m;
        vector<int> X(n), Y(m), freq(5,0);
        for(auto &num : X) cin >> num;
        for(auto &num : Y) cin >> num;
        sort(Y.begin(), Y.end());
        for(auto num : Y)
            if(num < 5) freq[num]++;
        for(auto num : X)
            cnt += countPairs(num, Y, freq);
        cout << cnt << endl;
    }
    return 0;
}