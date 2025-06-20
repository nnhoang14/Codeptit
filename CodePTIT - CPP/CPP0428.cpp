//https://code.ptit.edu.vn/student/question/CPP0428
//TRỘN HAI DÃY VÀ SẮP XẾP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(k);
        vector<int> res;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res.push_back(a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            res.push_back(b[i]);
        }
        sort(res.begin(),res.end());
        for(int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}