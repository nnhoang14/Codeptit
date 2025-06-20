//https://code.ptit.edu.vn/student/question/CPP0314
//CHÚC MỪNG NĂM MỚI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int times;
    cin>>times;
    cin.ignore();
    vector<string>s(times);
    set<string> rel;
    for(int i = 0 ; i < times; i++){
        getline(cin,s[i]);
    }
    for(auto x : s){
        if(rel.count(x)<=1)rel.insert(x);
    }
    cout<<rel.size();
    return 0;
}