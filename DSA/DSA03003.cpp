//https://code.ptit.edu.vn/student/question/DSA03003
//TÌM MAX

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        ll sum = 0;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            sum += (a[i] * i)%mod;
            sum %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}