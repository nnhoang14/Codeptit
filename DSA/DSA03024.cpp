//https://code.ptit.edu.vn/student/question/DSA03024
//LỰA CHỌN TỐI ƯU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, cnt = 1;
        cin >> n;
        vector<pair<int,int>> a(n);
        for(auto &x : a) cin >> x.first >> x.second;
        sort(a.begin(), a.end(),cmp);
        int cur = a[0].second;
        for(int i = 1; i < n; i++){
            if(cur <= a[i].first){ 
                cur = a[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}