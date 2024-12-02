//https://code.ptit.edu.vn/student/question/CPP0315
//ĐỔI CHỖ CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string check(string &s){
    ll lm = s.length() - 1;
    for(int i = lm - 1; i >=0 ; i--){
        int pos = - 1;
        for(int j = i + 1; j <= lm ; j++)
            if(s[i] > s[j] && s[j] != s[pos])pos = j;
        if(pos >= 0){ 
            swap(s[i],s[pos]);
            return s;
        }
    }
    return "-1";
}

int main() {
	int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
	return 0;
}