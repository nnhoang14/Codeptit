//https://code.ptit.edu.vn/student/question/DSA_P296
//DÃY CON TỔNG LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int curSum = 0, prefixSum[n + 1];
    for(int i = 0; i < n; i++){
        curSum = max(curSum, curSum + a[i]);
        prefixSum[i] = curSum;
    }
    while (q--){
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r - 1] - prefixSum[l - 2] << endl;
    }
    return 0;
}