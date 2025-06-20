//https://code.ptit.edu.vn/student/question/DSA02032
//TỔ HỢP SỐ CÓ TỔNG BẰNG X

#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> tmp, sol;
vector<string> res;

void Try(int i, int sum){
    if(sum == k){
        string s = "{";
        for(auto x : sol)
            s += to_string(x) + " ";
        s.pop_back();
        s += "}";
        res.push_back(s);
        return;
    }
    for(int j = i; j < n; j++){
        if(sum + tmp[j] <= k){
                sol.push_back(tmp[j]);
                Try(j, sum + tmp[j]);
                sol.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        res.clear();
        tmp.resize(n);
        for(auto &x : tmp) cin >> x;
        sort(tmp.begin(),tmp.end());
        Try(0, 0);
        if(!res.size()) cout << "-1";
        else{
            cout << res.size() << " ";
            for(auto x : res) cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}