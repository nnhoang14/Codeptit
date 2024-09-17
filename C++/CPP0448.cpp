//https://code.ptit.edu.vn/student/question/CPP0448
//ĐẾM SỐ LẦN XUẤT HIỆN

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,val,count = 0;
        cin>>n>>val;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            cin>>res[i];
            if(res[i] == val) count++;
        }
        if(count > 0)cout << count << endl;
        else cout << "-1" <<endl;
    }
    return 0;
}