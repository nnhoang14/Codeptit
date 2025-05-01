//https://code.ptit.edu.vn/student/question/DSA04035
//TÍNH LŨY THỪA

#include <iostream>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll lt(ll a, ll b){
    ll res = 1;
    a %= MOD;
    while (b > 0){
        if(b % 2 == 1)
            res = (res * a) % MOD;
            a = (a * a) % MOD;
            b /= 2;
    }
    return res;
}

int main(){
    while(true){
        ll a, b;
        cin >> a >> b;
        if(!a && !b) break;
        cout << lt(a,b) << endl;
    }
}
