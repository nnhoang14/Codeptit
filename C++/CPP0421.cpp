//https://code.ptit.edu.vn/student/question/CPP0421
//SẮP ĐẶT DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,count = 0;
        cin>>n;
        set<long long> check;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            check.insert(a[i]);
        }
        for(int i = 0; i < n; i++){
            if(check.count(i) > 0) 
                a[i] = i;
            else
                a[i] = -1;
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}