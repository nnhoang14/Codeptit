//https://code.ptit.edu.vn/student/question/CPP0310
//TỔNG LỚN NHẤT VÀ NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void check(string s){
    int ck = 0;
    set<int> a;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            int num = s[i] - '0';
            a.insert(num);
            }
        else {
            ck = -1;
            break;
        }
    }
    if(ck == -1)cout << "INVALID" << endl;
    else if (a.size() == 10 ) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}