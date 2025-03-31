//https://code.ptit.edu.vn/student/question/DSA01013
//MÃ GRAY 2

#include <bits/stdc++.h>
using namespace std;

void generateBinary(string &s) {
    string binary = "";
    binary += s[0];
    for(int i = 1; i < s.length(); i++){
        if(binary[i - 1] == s[i]) binary += "0";
        else binary += "1";
    }
    cout << binary << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        generateBinary(s);
    }
    return 0;
}
