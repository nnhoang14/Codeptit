//https://code.ptit.edu.vn/student/question/CPP0311
//SẮP ĐẶT XÂU KÝ TỰ - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s){
    map<char, int> mp;
        for(auto c : s) mp[c]++;
        ll en = (s.length() + 1) / 2;
        for(auto &entry : mp){
            if(entry.second > en)return 0;
        }
    return 1;
}

int main() {
	int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;
        cout << check (s) << endl;
    }
	return 0;
}