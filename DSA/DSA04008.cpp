//https://code.ptit.edu.vn/student/question/DSA04004
//GẤP ĐÔI DÃY SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findNum(ll n, ll k){
    if(n == 1) return 1;
    ll mid = pow(2, n - 1);
    if(k == mid) return n;
    else if(k < mid) return findNum(n - 1, k);
    else return findNum(n - 1, k - mid);
}

int main() {
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << findNum(n, k) << endl;
    }
    return 0;
}