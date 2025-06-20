//https://code.ptit.edu.vn/student/question/DSA01002
//TẬP CON KẾ TIẾP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        vector<int> x(k);
        for(auto &num : x)cin >> num;
        int i = k - 1;
        while (i >= 0 && x[i] == (n - k + i + 1)){
            i--;
        }
        if(i < 0){
            iota(x.begin(),x.end(),1);
        } else {
            x[i] ++;
            for(int j = i + 1; j < k; j++)
                x[j] = x[j - 1] + 1;
        }
        for(auto num : x) cout << num << " ";
        cout << endl;
    }
    return 0;
}