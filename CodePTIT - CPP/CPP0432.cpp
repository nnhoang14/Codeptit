//https://code.ptit.edu.vn/student/question/CPP0432
//SẮP XẾP THEO CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(string a, string b){
    string s1 = a + b, s2 = b + a;
    return s1 > s2;
}

int main() {
	int test;
    cin >> test;
    while (test --){
        int n;
        cin >> n;
        vector<string> a(n);
        string res = "";
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end(),cmp);
        for(auto x : a)cout << x;
        cout << endl;
    }
	return 0;
}