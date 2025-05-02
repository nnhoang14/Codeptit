//https://code.ptit.edu.vn/student/question/DSA04022
//KÝ TỰ THỨ K TRONG XÂU

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char findChar(ll n, ll k){
    if(n == 1) return 'A';
    ll mid = pow(2, n - 1);
    if(k == mid) return 'A' + n - 1;
    else if (k < mid) return findChar(n - 1, k);
    else return findChar(n - 1, k - mid);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << findChar(n, k) << endl;
    }
    return 0;
}