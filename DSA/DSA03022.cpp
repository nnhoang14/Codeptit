//https://code.ptit.edu.vn/student/question/DSA03022
//TÍCH LỚN NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll max1 = 1LL * a[n-1] * a[n-2] * a[n-3];
    ll max2 = 1LL * a[0] * a[1] * a[n-1];
    ll max3 = 1LL * a[n-1] * a[n-2];
    ll max4 = 1LL * a[0] * a[1];
    ll res = max({max1, max2, max3, max4});
    cout << res;
    return 0;
}
