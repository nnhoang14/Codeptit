//https://code.ptit.edu.vn/student/question/CPP0371
//LOẠI BỎ NGUYÊN ÂM

#include <bits/stdc++.h>
using namespace std;

void downcase(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main() {
    string s;
    cin>>s;
    string na = "aeiouy";
    downcase(s);
    for(auto x : s){
        bool status = true;
        for(auto c : na){
            if(x == c){
                status = false;
                break;
            }
        }
        if(status)cout<<"."<<x;
    }
    return 0;
}