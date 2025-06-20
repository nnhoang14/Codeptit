//https://code.ptit.edu.vn/student/question/DSA02039
//PHÂN TÍCH SỐ 2

#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> res;

void Try(int i, int remain, string s){
    if(remain < 0) return;
    if(remain == 0) {
        s.pop_back();
        res.push_back("(" + s + ")");
        return;
    }
    for(int j = i; j >= 1; j--) {
        string tmp = s;
        tmp += to_string(j) + " ";
        Try(j, remain - j, tmp);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        res.clear();
        Try(n, n, "");
        cout << res.size() << endl;
        for(auto &x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
