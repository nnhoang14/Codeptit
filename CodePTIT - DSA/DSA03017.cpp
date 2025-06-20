//https://code.ptit.edu.vn/student/question/DSA03017
//GIÁ TRỊ NHỎ NHẤT CỦA XÂU

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        string s;
        cin >> k >> s;
        map<char, int> freq;
        for(auto c : s)
        freq[c]++;
        priority_queue<int> pq;
        for(auto p : freq)
        pq.push(p.second);
        while (k-- && !pq.empty()){
            int tmp = pq.top(); 
            pq.pop();
            tmp --;
            pq.push(tmp);
        }
        ll res = 0;
        while (!pq.empty()){
            ll x = pq.top(); pq.pop();
            res += x * x;
        }
        cout << res << endl;
    }
    return 0;
}