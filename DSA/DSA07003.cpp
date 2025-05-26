//https://code.ptit.edu.vn/student/question/DSA07003
//KIỂM TRA BIỂU THỨC SỐ HỌC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check (string s){
    string  ip ="(+-*/%";
    stack<char> kt;
    for(auto c : s){
        if(ip.find(c) != string::npos) kt.push(c);
        else if(c == ')'){
            if(kt.top() == '(') return 1;
            else{
                while(kt.top() != '('){
                    kt.pop();
                }
                kt.pop();
            }
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        cout << (check(s) ? "Yes" : "No") << endl;
    }    
    return 0;
}