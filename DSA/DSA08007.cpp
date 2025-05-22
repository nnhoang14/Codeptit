//https://code.ptit.edu.vn/student/question/DSA08007
//SỐ BDN 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, cnt = 0;
        cin >> n;
        queue<ll> q;
        q.push(1);
        while(q.front() <= n){
          ll top = q.front();
          q.pop();
          cnt++;
          q.push(top * 10);
          q.push(top * 10 + 1);
        }
        cout << cnt << endl;
    }
    return 0;
}