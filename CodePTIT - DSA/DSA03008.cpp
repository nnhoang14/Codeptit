//https://code.ptit.edu.vn/beta/problems/DSA03008
//SẮP XẾP CÔNG VIỆC 1

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<pair<int, int>> info(n);
        for(auto &x : info) cin >> x.first;
        for(auto &x : info) cin >> x.second;
        sort(info.begin(), info.end(), cmp);
        int cnt = 1, end = info[0].second;
        for(int  i = 1; i < n; i++){
            if(info[i].first >= end){
                cnt++;
                end = info[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}