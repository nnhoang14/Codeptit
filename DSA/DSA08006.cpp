//https://code.ptit.edu.vn/student/question/DSA08006
//SỐ 0 VÀ SỐ 9

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, res = 0;
        cin >> n;
        queue<ll> q;
        q.push(9);
        while(!q.empty()){
            ll top = q.front();
            q.pop();
            if(top % n == 0){
            res = top;
            break;
            }
            q.push(top * 10);
            q.push(top * 10 + 9);
        }
        cout << res << endl;
    }
    return 0;
}