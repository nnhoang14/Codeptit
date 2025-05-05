//https://code.ptit.edu.vn/student/question/DSA05045
//BÀI TOÁN CÁI TÚI KHÔNG NGUYÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    float a1 = (float)a.second / a.first;
    float b1 = (float)b.second / b.first;
    return a1 > b1;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n, v;
        cin >> n >> v;
        vector<pair<int, int>> items(n);
        for(auto &x : items) cin >> x.second >> x.first;
        sort(items.begin(), items.end(), cmp);
        float ans = 0;
        for (int i = 0; i < n; i++){
            if (v == 0) break;
            if (items[i].first <= v){
                ans += items[i].second;
                v -= items[i].first;
            } else {
                ans += (float)items[i].second * v / items[i].first;
                v = 0;
            }
        }
        cout << setprecision(2) << fixed << ans << endl;
    }    
    return 0;
}