//https://code.ptit.edu.vn/student/question/DSA03004
//TỔNG NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll num_f = 0, num_s = 0;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) num_f = num_f * 10 + a[i];
            else num_s = num_s * 10 + a[i];
        }
        cout << num_f + num_s << endl;
    }
    return 0;
}