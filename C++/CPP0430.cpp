//https://code.ptit.edu.vn/student/question/CPP0430
//BỔ SUNG PHẦN TỬ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,range;
        cin>>n;
        vector<int> res(n);
        set<int> dif;
        for(int i = 0; i < n; i++){
            cin >> res[i];
            dif.insert(res[i]);
        }
        sort(res.begin(),res.end());
        range = res[n-1] - res[0] - dif.size() + 1;
        cout << range << endl;
    }
    return 0;
}