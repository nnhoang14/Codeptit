//https://code.ptit.edu.vn/student/question/DSA08001
//CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue<int> q;
        for (int i = 0; i < n; i++) {
            int status;
            cin >> status;
            switch (status) {
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    cout << (q.empty() ? "YES" : "NO") << endl;
                    break;
                case 3:
                    int x;
                    cin >> x;
                    q.push(x);
                    break;
                case 4:
                    if (!q.empty()) q.pop();
                    break;
                case 5:
                    cout << (q.empty() ? -1 : q.front()) << endl;
                    break;
                case 6:
                    cout << (q.empty() ? -1 : q.back()) << endl;
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}