//https://code.ptit.edu.vn/student/question/DSA02045
//TẬP CON CỦA XÂU KÝ TỰ

#include <bits/stdc++.h>
using namespace std;

int n;
vector<char> a;
set<string> res;

bool check(string s) {
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] > s[i + 1]) return false;
    }
    return true;
}

void Try(int i, string s) {
    if (i == n) { 
        if(!s.empty() && check(s))  
            res.insert(s);
        return;
    }
    Try(i + 1, s);
    Try(i + 1, s + a[i]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);
        res.clear();
        for (auto &x : a) cin >> x;
        Try(0, "");
        for(auto &x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}