//https://code.ptit.edu.vn/student/question/CPP0342
//TÁCH CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll sum = 0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i = 0; i < s.length(); i ++){
        if(isdigit(s[i])) sum += s[i] - '0';
        else cout<<s[i];
    }
    cout << sum << endl;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        solve();
    }
    return 0;
}