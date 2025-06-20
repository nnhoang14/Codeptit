//https://code.ptit.edu.vn/student/question/DSA01020
//XÂU NHỊ PHÂN TRƯỚC

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        string s;
        cin >> s;
        int i = s.length() - 1;
        while (i >= 0 && s[i] == '0'){
            s[i] = '1';
            i--;
        }
        if(i >= 0) s[i] = '0';
        cout << s << endl;
    }
    return 0;
}