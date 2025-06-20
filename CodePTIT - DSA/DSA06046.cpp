//https://code.ptit.edu.vn/student/question/DSA06046
//CHÊNH LỆCH NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n, res;
        cin >> n;
        int a[n];
        for(auto &x : a)cin >> x;
        sort(a, a + n);
        res = a[1] - a[0];
        for(int i = 1; i < n - 1; i++){
            int sp = a[i + 1] - a[i];
            res = min(sp, res);
        }
        cout << res << endl;
    }
    return 0;
}