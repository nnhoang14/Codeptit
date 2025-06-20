//https://code.ptit.edu.vn/student/question/DSA04017
//PHẦN TỬ KHÁC NHAU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n), b(n - 1);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(ll i = 0; i < n; i++){
            if(i == n - 1 || a[i] != b[i]){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}