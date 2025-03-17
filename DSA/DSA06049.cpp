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
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - 1; i ++){
            for(int j = i + 1; j < n; j ++){
                if(abs(a[i] - a[j]) < k) cnt++;
            }
        }
        cout << cnt << endl; 
    }
    return 0;
}