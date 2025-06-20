//https://code.ptit.edu.vn/student/question/DSA06032
//BỘ BA SỐ CÓ TỔNG NHỎ HƠN K

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countLess(vector<ll> a, int n, int k){
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        ll j = i + 1, m = n - 1;
        while (j < m){
            ll sum = a[i] + a[j] + a[m];
            if(sum < k) {
                cnt += m - j;
                j++;
            }
            else m--;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        cout << countLess(a,n,k) << endl;
    }
    return 0;
} 