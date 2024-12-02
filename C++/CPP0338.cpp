//https://code.ptit.edu.vn/student/question/CPP0338
//ĐẾM XÂU CON

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dxc(string s, int k){
    int cnt = 0, lm = s.length();
    for(int i = 0; i < lm; i ++){
        set<char> kt;
        for(int j = i; j < lm; j++){
            kt.insert(s[j]);
            if(kt.size() == k) cnt++;
            if(kt.size() > k) break;
        }
    }
    return cnt;
}

int main() {
	int test;
    cin >> test;
    cin.ignore();
    while (test--){
        int k;
        string s;
        cin >> s >> k;
        cout << dxc(s,k) << endl;
    }
	return 0;
}