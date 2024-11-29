//https://code.ptit.edu.vn/student/question/CPP0412
//SẮP XẾP 0 -1 - 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin>>num;
        vector<int> a(num);
        for(int i = 0 ; i < num; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(auto x : a)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
