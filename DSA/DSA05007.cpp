//https://code.ptit.edu.vn/student/question/DSA05007
//TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        ll prev2 = a[0];
        ll prev1 = max(a[0], a[1]);
        for(int i = 2; i < n; i ++){
            ll cur = max (prev1, prev2 + a[i]);
            prev2 = prev1;
            prev1 = cur;
        }
        cout << prev1 << endl;
    }    
    return 0;
}