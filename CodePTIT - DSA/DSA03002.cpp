//https://code.ptit.edu.vn/student/question/DSA03002
//NHẦM CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;

int changeFive(string s){
    for(auto &c : s)
        if(c == '6') c = '5';
    return stoi(s);
}

int changeSix(string s){
    for(auto &c : s)
        if(c == '5') c = '6';
    return stoi(s);
}

int main(){
    string a, b;
    cin >> a >> b;
    int min = changeFive(a) + changeFive(b);
    int max = changeSix(a) + changeSix(b);
    cout << min << " " << max;
    return 0;
}