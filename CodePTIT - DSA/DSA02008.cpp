//https://code.ptit.edu.vn/student/question/DSA02008
//CHỌN SỐ TỪ MA TRẬN VUÔNG CẤP N

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n + 1, vector<int>(n)), res;
    vector<int> tmp(n);
    for(int i = 0; i < n; i++) {
        tmp[i] = i;
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    
    do {
        vector<int> v;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i][tmp[i]];
            if (sum > k) break;
            v.push_back(tmp[i] + 1);
        }
        if(sum == k) res.push_back(v);
    } while(next_permutation(tmp.begin(), tmp.end()));

    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(const auto& v : res) {
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
