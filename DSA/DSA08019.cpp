//https://code.ptit.edu.vn/student/question/DSA08019
//SỐ LỘC PHÁT 3

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
        stack<string> res;
        dq.push_back("6");
        dq.push_back("8");
        while(!dq.empty()){
            string top = dq.front();
            dq.pop_front();
            if(top.length() > n) break;
            res.push(top);
            dq.push_back(top + "6");
            dq.push_back(top + "8");
        }
        cout << res.size() << endl;
        while(!res.empty()){
            cout << res.top() << " ";
            res.pop();
        }
        cout << endl;
    }
    return 0;
}