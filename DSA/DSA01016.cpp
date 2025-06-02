//https://code.ptit.edu.vn/student/question/DSA01016
//PHÂN TÍCH SỐ 1

#include <bits/stdc++.h>
using namespace std;

bool nextPartition(vector<int>& a, int n) {
    int i = a.size() - 1;
    while (i >= 0 && a[i] == 1) {
        i--;
    }
    if (i < 0) return false;
    a[i]--;
    int sum = 1;
    for (int j = i + 1; j < a.size(); j++) {
        sum += a[j];
    }
    a.erase(a.begin() + i + 1, a.end());
    while (sum > 0) {
        int val = min(sum, a[i]);
        a.push_back(val);
        sum -= val;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> a(1, n);
        do {
            cout << "(";
            for (int i = 0; i < a.size(); i++) {
                cout << a[i];
                if (i != a.size() - 1) cout << " ";
            }
            cout << ") ";
        } while (nextPartition(a, n));
        cout << endl;
    }
    return 0;
}
