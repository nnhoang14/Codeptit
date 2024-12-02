//https://code.ptit.edu.vn/student/question/CPP0272
//TÍNH TOÁN TRÊN DÃY SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mode = 1e9+7;

int main() {    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int test;
    cin >> test;
    while (test--){
        ll n, h = 1, g = -1; 
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) {
            cin >> x;
            if(g == -1) g = x;
            else g = __gcd(g,x);
            h = (h * x) % mode; 
        }
        //cout << h << " " << g ;
        ll res = 1;
        while(g > 0){
            if(g % 2 == 1) res = (res * h) % mode;
            h = (h * h) % mode;
            g /= 2;
        }
        cout << res << endl;
    }
	return 0;
}