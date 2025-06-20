//https://code.ptit.edu.vn/student/question/DSA02024
//DÃY CON TĂNG DẦN

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, current;
vector<string> res;

void Try(int i){
    if(current.size() >= 2){
        string s = "";
        for(auto x : current) 
            s += to_string(x) + " ";
        s.pop_back();
        res.push_back(s);
    }

    for(int j = i; j < n; j++){
        if(current.empty() || current.back() < a[j]){
            current.push_back(a[j]);
            Try(j + 1);
            current.pop_back();
        }
    }
}

int main() {
    cin >> n;
    a.resize(n);
    for(auto &x : a) cin >> x;
    Try(0);
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;
    return 0;
}
