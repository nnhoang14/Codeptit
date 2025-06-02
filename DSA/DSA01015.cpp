//https://code.ptit.edu.vn/student/question/DSA01015
//TÌM BỘI SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<ll> dq;
        dq.push_back(9);
        while (!dq.empty()){
            ll x = dq.front();
            dq.pop_front();
            if (x % n == 0) {
                cout << x << endl;
                break;
            }
            dq.push_back(x * 10);
            dq.push_back(x * 10 + 9);
        }
    }
    return 0;
}
