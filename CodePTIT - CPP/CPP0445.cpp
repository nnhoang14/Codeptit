//https://code.ptit.edu.vn/student/question/CPP0445
//SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> res(n);
        for(int i = 0; i < n; i++)
            cin>>res[i];
        sort(res.begin(),res.end());
        if(res[0]<res[1])cout << res[0] << " " << res[1] << endl;
        else cout << "-1" << endl;
    }
    return 0;
}