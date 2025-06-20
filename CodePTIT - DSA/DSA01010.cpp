//https://code.ptit.edu.vn/student/question/DSA01010
//TẬP QUÂN SỰ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        unordered_set<int> s;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k - 1;
        while (i >= 0 && a[i] == n - k + i + 1) {
            i--;
        }
        if (i < 0){
            cout << k << endl;
        } else {
            a[i]++;
            s.insert(a[i]);
            for (int j = i + 1; j < k; j++) {
                a[j] = a[j - 1] + 1;
                s.insert(a[j]);
            }
            cout << s.size() - k << endl;
        }
    }
    return 0;
}