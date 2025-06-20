//https://code.ptit.edu.vn/student/question/DSA06041
//SỐ XUẤT HIỆN NHIỀU NHẤT

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            int x; 
            cin >> x;
            freq[x] ++;
        }
        vector<pair<int, int>> a(freq.begin(),freq.end());
        sort(a.begin(), a.end(), cmp);
        int len = a.size();
        if(a[len -1].second > n/2) cout << a[len - 1].first << endl;
        else cout << "NO" << endl;
    }
    return 0;
}