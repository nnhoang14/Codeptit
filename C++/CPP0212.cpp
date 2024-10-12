//https://code.ptit.edu.vn/student/question/CPP0212
//TÍNH GIÁ TRỊ ĐA THỨC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    const int max = 1e9 + 7; 
    while (test--)
    {
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i = n - 1; i >= 0; i--) cin >> a[i];
        ll res = 0;
        for(int i = n - 1; i >= 0; i--){
            ll tmp = a[i];
            for(int j = 1; j <= i; j++){
                tmp = (tmp * x) % max;
            }
            res = (res + tmp) % max
        }
        cout << res << endl;
    }
    return 0;
}