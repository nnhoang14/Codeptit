//https://code.ptit.edu.vn/student/question/CPP0173
//CHIA HẾT CHO BA SỐ NGUYÊN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(int a, int b){
    return (ll)a*b/__gcd(a,b);
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int x,y,z,n;
        cin >> x >> y >> z >> n;
        ll st = lcm(lcm(x,y),z), gh = pow(10,n-1) ;
        ll res = (gh + st - 1) / st * st, ts = pow(10,n);
        if(res < ts)cout << res << endl;
        else cout << "-1" << endl;
    }
    return 0;
}