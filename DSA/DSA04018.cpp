//https://code.ptit.edu.vn/student/question/DSA04018
//ĐẾM SỐ 0

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countZero(vector<int> &a, int n){
    int l = 0, r = n - 1, pos = n;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == 1){
            pos = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return pos;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        cout << countZero(a, n) << endl;
    }
    return 0;
}