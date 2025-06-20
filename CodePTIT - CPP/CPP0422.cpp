//https://code.ptit.edu.vn/student/question/CPP0422
//SỐ 0 Ở CUỐI DÃY

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n ;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        auto it = remove(a.begin(),a.end(),0);
        a.erase(it,a.end());
        int add = n - a.size();
        while(add--){
            a.push_back(0);
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}