//https://code.ptit.edu.vn/student/question/DSA06049
//ĐẾM CẶP

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k, cnt = 0;
        cin >> n >> k;
        vector<ll> res(n);
        for(auto &x : res) cin >> x;
        sort(res.begin(), res.end());
        for(int i = 0; i < n; i ++){
            auto it = lower_bound(res.begin() + i + 1, res.end(), res[i] + k);
            cnt += (it - res.begin() - 1 - i);
        }
        cout << cnt << endl; 
    }
    return 0;
}