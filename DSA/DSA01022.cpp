//https://code.ptit.edu.vn/student/question/DSA01022
//SỐ THỨ TỰ HOÁN VỊ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, cnt = 1;
        cin >> n;
        vector<int> x(n),tmp(n);
        iota(x.begin(), x.end(), 1);
        for(auto &num : tmp) cin >> num;
        while (x != tmp){
            cnt++; 
            int pos = n - 2;
            while (pos >= 0 && x[pos] > x[pos + 1]){
                pos--;
            }
            if(pos < 0) break;
            int i = n - 1;
            while (x[i] < x[pos]){ 
                i --;
            }
            swap(x[pos],x[i]);
            reverse(x.begin() + pos + 1,x.end());
        }
        cout << cnt << endl;
    }
    return 0;
}