//https://code.ptit.edu.vn/student/question/CPP0324
//PHÉP CHIA DƯ CỦA LŨY THỪA SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll chiadu(string s, ll n){
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
        ll b,n;
        string a;
        cin >> a >> b >> n;
        ll tmp = chiadu(a,n);
        ll res = 1;
        while (b > 0){
            if (b % 2 == 1) res = (res * tmp) % n;
            tmp = (tmp * tmp) % n;
            b /= 2; 
        }
        cout << res << endl;
    }
	return 0;
}