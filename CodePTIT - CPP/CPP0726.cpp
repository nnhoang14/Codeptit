//https://code.ptit.edu.vn/student/question/CPP0726
//PHÉP CHIA DƯ CỦA TÍCH HAI SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test --)
    {
        ll a, b, c, res = 0;
        cin >> a >> b >> c;
        a %= c;
        while (b > 0){
            if(b % 2 == 1)res = (res + a) % c;
            a = (a * 2) % c;
            b /= 2;
        }
        cout << res << endl;
    }
    return 0;
}