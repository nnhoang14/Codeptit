//https://code.ptit.edu.vn/beta/problems/DSA06002
//SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI

#include <bits/stdc++.h>
using namespace std;

int n, x;

bool cmp(int a, int b){
    return abs(x - a) < abs(x - b);
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        cin >> n >> x;
        vector<int> a(n);
        for(auto &num : a) cin >> num;
        stable_sort(a.begin(),a.end(),cmp);
        for(auto num : a) cout << num << " ";
        cout << endl;
    }
    return 0;
}