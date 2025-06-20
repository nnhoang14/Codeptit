//https://code.ptit.edu.vn/student/question/DSA02002
//DÃY SỐ 2

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<string> res;

void Try(vector<int> &currentArr){
    string s = "[";
    int len = currentArr.size();
    for(int i = 0; i < len; i++)
        s += to_string(currentArr[i]) + " ";
    s.pop_back();
    s += "]";
    res.push_back(s);
    if(len == 1) return;
    vector<int> nextArr(len - 1);
    for(int i = 0; i < len - 1; i++)
        nextArr[i] = currentArr[i] + currentArr[i + 1];
    Try(nextArr);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n);
        res.clear();
        for(auto &x : a) cin >> x;
        Try(a);
        for(int i = res.size() - 1; i >=0 ; i--)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} 