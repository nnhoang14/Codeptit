//https://code.ptit.edu.vn/student/question/DSA08018
//SỐ LỘC PHÁT 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        deque<string> dq;
        vector<string> res;
        dq.push_back("6");
        dq.push_back("8");
        while(!dq.empty()){
            string top = dq.front();
            dq.pop_front();
            if(top.length() > n) break;
            res.push_back(top);
            dq.push_back(top + "6");
            dq.push_back(top + "8");
        }
        cout << res.size() << endl;
        for(auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}