//https://code.ptit.edu.vn/student/question/CPP0140
//SỐ HOÀN HẢO

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
    if (n > (ll) 1e12) return 0;
    ll sum = 1;
    for(ll i = 2; i <= sqrt(n); i ++){
        if(n % i == 0)sum += i + (n / i);
    }
    //cout << sum << " ";
    return sum == n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	int test;
    cin >> test;
    while (test--){
        ll n;
        cin >> n;
        cout << check(n) << endl;
    }
	return 0;
}