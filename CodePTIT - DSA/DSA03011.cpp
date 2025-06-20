//https://code.ptit.edu.vn/student/question/DSA03011
//NỐI DÂY 2

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll BASE = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        ll OPT = 0;
        cin >> n;
        priority_queue<ll, vector<ll> ,greater<ll>> pq;
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1){
            int tmp = pq.top(); pq.pop();
            tmp = (tmp + pq.top()) % BASE ; pq.pop();
            OPT += tmp;
            OPT %= BASE;
            pq.push(tmp);
        }
        cout << OPT << endl;
    }
    return 0;
}