//https://code.ptit.edu.vn/student/question/CPP0318
//BIỂN SỐ ĐẸP

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int same_num(string s) {
    int n = s.length() - 1;
    return (s[n - 5] == s[n - 4] && s[n - 4] == s[n - 3] && s[n - 1] == s[n]);
}

int all_six_eight(string s){
    int n = s.length() - 1;
    for(int i = n - 5; i <= n; i++){
        if(i == n - 2) continue;
        if(s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}

int ascending(string s){
    int n = s.length() - 1;
    for(int i = n - 5; i < n; i++){
        if(i != n - 3 && s[i] >= s[i + 1]) return 0;
        else if (i == n- 3 && s[i] >= s[i + 2]) return 0;
    }
    return 1;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s; 
        getline(cin, s);
        if(same_num(s) || all_six_eight(s) || ascending(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
