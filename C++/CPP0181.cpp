//https://code.ptit.edu.vn/student/question/CPP0181
//SỐ LẶP LẠI

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll a,x,y;
        cin >> a >> x >> y;
        ll t = __gcd(x,y);
        while(t--){
            cout << a;
        }
        cout<<endl;
    }
    return 0;
}