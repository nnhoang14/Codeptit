//https://code.ptit.edu.vn/student/question/DSA02022
//DÃY CON TĂNG DẦN

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vs;
vector<string> a, res;

int check(){
    vector<string> tmp;
    for(int i = 0; i < n; i++){
        if(vs[i]){
            if(!tmp.empty() && tmp.back() >= a[i]) return 0;
            tmp.push_back(a[i]);
        }
    }
    if(tmp.size() > 1){
        string s = "";
        for(int i = 0; i < n; i++)
            if(vs[i]) s += a[i] + " ";
        s.pop_back();
        res.push_back(s);
    }
}

/* void result(){
    string s = "";
    for(int i = 0; i < n; i++)
        if(vs[i]) s += a[i] + " ";
    s.pop_back();
    res.push_back(s);
}
 */
void Try(int i){
    for(int j = 0; j <= 1; j++){
        vs[i] = j;
        if(i == n - 1) check();
        else Try(i + 1);
    }
}

int main() {
    cin >> n;
    a.resize(n);
    vs.resize(n);
    for(auto &x : a) cin >> x;
    Try(0);
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << endl;
    return 0;
}
