//https://code.ptit.edu.vn/student/question/CPP0323
//PHÉP CHIA DƯ CỦA SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll chiadu(string &s, ll n){
    ll res = 0;
    for (char c : s) {
        res = (res * 10 + (c - '0')) % n;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	int test;
    cin >> test;
    while (test--){
        ll n;
        string s;
        cin >> s >> n;
        cout << chiadu(s, n) << endl;
    }
	return 0;
}