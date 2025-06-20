//https://code.ptit.edu.vn/beta/problems/DSA03010
//NỐI DÂY 1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        ll OPT = 0;
        cin >> n;
        priority_queue<int, vector<int> ,greater<int>> pq;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1){
            int tmp = pq.top(); pq.pop();
            tmp += pq.top(); pq.pop();
            OPT += tmp;
            pq.push(tmp);
        }
        cout << OPT << endl;
    }
    return 0;
}