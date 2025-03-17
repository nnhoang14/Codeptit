//https://code.ptit.edu.vn/student/question/DSA06036
//BỘ BA SỐ BẰNG K

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<ll> a, int n, int k){
    for(int i = 0; i < n; i++){
        int j = i + 1, m = n - 1;
        while (j < m){
            ll sum = a[i] + a[j] + a[m];
            if(sum < k) j++;
            else if(sum > k) m--;
            else return 1;
        }
    }
    return 0;
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
        if(check(a,n,k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
} 