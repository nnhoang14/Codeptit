//https://code.ptit.edu.vn/student/question/CPP0415
//TÍNH TÍCH
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int m,n;
        cin>>m>>n;
        vector<long long> a(m);
        vector<long long> b(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long res;
        res = a[m-1]*b[0];
        cout << res << endl;
    }
    return 0;
}