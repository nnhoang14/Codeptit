//https://code.ptit.edu.vn/student/question/CPP0447
//LIỆT KÊ K PHẦN TỬ LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> res(n);
        for(int i = 0; i < n; i++)
            cin>>res[i];
        sort(res.begin(),res.end());
        for(int i = n-1; i > n - 1 - k ; i--)
            cout << res[i] << " ";
        cout<<endl;
    }
    return 0;
}