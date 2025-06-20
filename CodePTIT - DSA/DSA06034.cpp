//https://code.ptit.edu.vn/student/question/DSA06034
//CẶP SỐ CÓ TỔNG BẰNG K

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k, cnt = 0;
        cin >> n >> k;
        unordered_map<ll, ll> freq;
        vector<ll> a(n);
        for(auto &x : a){
            cin >> x;
            freq[x]++;
        }
        for(auto x : a){
            cnt += freq[k - x];
            if(x * 2 == k) cnt --;
        }
        cout << cnt / 2 << endl; 
    }
    return 0;
}