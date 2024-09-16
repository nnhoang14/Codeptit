//https://code.ptit.edu.vn/student/question/CPP0442
//TÌM KIẾM NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,val,count = -1;
        cin>>n>>val;
        vector<int> res(n);
        set<int> dif;
        for(int i = 0; i < n; i++){
            cin >> res[i];
            if(res[i] == val)count = 1;
        }
        cout << count <<endl;
    }
    return 0;
}