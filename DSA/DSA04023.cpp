//https://code.ptit.edu.vn/student/question/DSA04023
//KHOẢNG CÁCH NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 1 2 4 10
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        ll cnt = 0;
        for(int i = 0; i < n - 1; i++){
            auto it = lower_bound(a.begin(), a.end(), a[i] + k);
            cnt += it - (a.begin() + i + 1);
        }
        cout << cnt << endl;
    }
    return 0;
}