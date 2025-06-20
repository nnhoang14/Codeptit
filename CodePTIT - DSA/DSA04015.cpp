//https://code.ptit.edu.vn/student/question/DSA04015
//TÍNH FLOOR(X)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        auto it = upper_bound(a.begin(), a.end(), k);
        if(it == a.begin()) cout << "-1" << endl;
        else cout << it - a.begin() << endl;
    }
    return 0;
}