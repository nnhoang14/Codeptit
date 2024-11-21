//https://code.ptit.edu.vn/student/question/CPP0425
//SẮP XẾP CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int &x : a)cin >> x;
        sort(a,a+n);
        int cnt = 0;
        for(int i = 0; i < n; i += 2)b[i] = a[cnt ++];
        for(int i = 1; i < n; i += 2)b[i] = a[cnt ++];
        for(int x : b)cout << x << " ";
        cout << endl;
    }
    return 0;
}