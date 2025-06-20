//https://code.ptit.edu.vn/student/question/OLP206
//SẮP XẾP NGÀY THÁNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string a, string b){
    int d1,m1,y1,d2,m2,y2;
    sscanf(a.c_str(), "%d/%d/%d", &d1, &m1, &y1);
    sscanf(b.c_str(), "%d/%d/%d", &d2, &m2, &y2);
    if(y1 != y2) return y1 < y2;
    if(m1 != m2) return m1 < m2;
    return d1 < d2;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> res;
    while (n--){
        string s;
        getline(cin,s);
        if(s[2] != '/') s = "0" + s;
        if(s[5] != '/') s.insert(3,"0");
        res.push_back(s);
    } 
    sort(res.begin(),res.end(),cmp);
    for(auto x : res) cout << x << endl;
    return 0;
}