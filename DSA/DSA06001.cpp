//https://code.ptit.edu.vn/student/question/DSA06001
//SẮP XẾP XEN KẼ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> a(n),res(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i ++){
            if(i % 2 == 0) res[i] = a[(n - 1) - i/2];
            else res[i] = a[(i - 1)/2];
        }
        for(auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}