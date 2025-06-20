//https://code.ptit.edu.vn/student/question/CPP0441
//TÌM KIẾM TUẦN TỰ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,val,pt = -1;
        cin>>n>>val;
        vector<int> res(n);
        set<int> dif;
        for(int i = 0; i < n; i++)
            cin >> res[i];
        for(int i = 0; i < n; i++){
            if(res[i] == val){
                pt = i + 1;
                break;
            }
        }
        if(pt > -1)cout << pt <<endl;
        else cout << "-1" <<endl;
    }
    return 0;
}