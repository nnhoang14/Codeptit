//https://code.ptit.edu.vn/student/question/DSA01018
//TẬP CON LIỀN KỀ PHÍA TRƯỚC

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for(auto &x : a)  cin >> x;
        int i = k - 1;
        while (i >= 0 &&(a[i] == i + 1 || a[i] == a[i - 1] + 1)) {
            i--;
        }
        if (i < 0) {
            for (int j = n - k + 1; j <= n; j++)
                cout << j << " ";
            continue;
        }
        a[i]--;
        for (int j = i + 1; j < k; j++) {
                a[j] = n - k + j + 1;
            }
        for (int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}
