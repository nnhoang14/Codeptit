//https://code.ptit.edu.vn/student/question/CPP0353
//ĐIỆN THOẠI CỤC GẠCH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void upcase(string &s){
    for(char &x : s){
        x = toupper(x);
    }
} 

int check(string s){
    int l = 0, r = s.length() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    map<string, string> mp = {
        {"ABC", "2"}, {"DEF", "3"}, {"GHI", "4"}, {"JKL", "5"},
        {"MNO", "6"}, {"PQRS", "7"}, {"TUV", "8"}, {"WXYZ", "9"}
    };   
    while (test--){
        string s, res=""; 
        cin >> s;
        upcase(s);
        for(char x : s){
           for(auto &pair : mp){
                if(pair.first.find(x) != string::npos){
                    res += pair.second;
                    break;
                }
           } 
        }
        if(check(res)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}