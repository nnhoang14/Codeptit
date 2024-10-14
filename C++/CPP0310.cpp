//https://code.ptit.edu.vn/student/question/CPP0310
//TỔNG LỚN NHẤT VÀ NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string min(string s){
    for(int i = 0; i < s.length(); i++)
        if(s[i] == '6')s[i] = '5';
    return s;
}

string max(string s){
    for(int i = 0; i < s.length(); i++)
        if(s[i] == '5')s[i] = '6';
    return s;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        ll mn1 = stoll(min(s1)), mn2 = stoll(min(s2));
        ll mx1 = stoll(max(s1)), mx2 = stoll(max(s2)); 
        cout << mn1 + mn2 << " " << mx1 + mx2 << endl;
    }
    return 0;
}