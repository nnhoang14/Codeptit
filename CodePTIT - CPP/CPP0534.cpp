//https://code.ptit.edu.vn/student/question/CPP0534
//SỐ THUẬN NGHỊCH GIẢM DẦN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cmp{
    bool operator () (string a, string b) {
        if(a.size() == b.size()) return a > b;
        return a.size() > b.size();
    }
};

int check(string s){
    if(s.size() < 2)return 0;
    int n = s.size();
    for(int i = 0; i < n / 2; i ++){
        if(s[i] != s[n - 1 - i]) return 0;
    }
    return 1;
}

int main(){
    string s;
    map<string, int, cmp> freq;
    while (cin >> s){
        if(check(s)) freq[s]++;
    }
    for(auto entry : freq)
        cout << entry.first << " " << entry.second << endl;
    return 0;
}