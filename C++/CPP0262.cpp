//https://code.ptit.edu.vn/student/question/CPP0262
//TẬP HỢP NGUYÊN TỐ CÙNG NHAU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a, ll b){
    return __gcd(a,b) == 1;
}
int main() {
	int test;
    cin >> test;
    while (test--){
        ll n, m; 
        cin >> n >> m;
        ll sum = n*(n+1)/2;
        ll t2 = (sum - m)/2;
        ll t1 = t2 + m;
        cout << t1 << " " << t2 << " ";
        /* if(isPrime(t2)) cout << "t2" << endl;
        if(isPrime(t1)) cout << "t1" << endl; */
        if(check(t1,t2)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}