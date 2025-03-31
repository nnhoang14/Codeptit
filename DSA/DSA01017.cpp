//https://code.ptit.edu.vn/student/question/DSA01017
//MÃ GRAY 3

#include <bits/stdc++.h>
using namespace std;

void generateGrey(string &s) {
    string grey = "";
    grey += s[0];
    for(int i = 1; i < s.length(); i++){
        if(s[i - 1] == s[i]) grey += "0";
        else grey += "1";
    }
    cout << grey << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        generateGrey(s);
    }
    return 0;
}
