//https://code.ptit.edu.vn/student/question/DSA01023
//SỐ THỨ TỰ TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k, cnt = 1;
        cin >> n >> k;
        vector<int> x(k), tmp(k);
        iota(x.begin(),x.end(),1);
        for(auto &num : tmp) cin >> num;
        while (x != tmp){
            cnt ++;
            int i = k - 1;
            while (i >= 0 && x[i] == (n - k + i + 1)){
                i--;
            }
            if(i < 0)
               break;
            x[i] ++;
            for(int j = i + 1; j < k; j++)
                x[j] = x[j - 1] + 1;
        }
        cout << cnt << endl;
    }
    return 0;
}