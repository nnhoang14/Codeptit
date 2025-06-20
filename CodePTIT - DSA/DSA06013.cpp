//https://code.ptit.edu.vn/student/question/DSA06013
//SỐ LẦN XUẤT HIỆN

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n, k, cnt = 0;
        cin >> n >> k;
        int a[n];
        for(auto &x : a){
            cin >> x;
            if(x == k) cnt++;
        }
        if(cnt == 0) cnt--;
        cout << cnt << endl;
    }
    return 0;
}