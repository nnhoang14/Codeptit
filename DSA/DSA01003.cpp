//https://code.ptit.edu.vn/student/question/DSA01003
//HOÁN VỊ KẾ TIẾP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> x(n);
        for(auto &num : x)cin >> num;
        int pos = n - 1;
        while (pos >= 0 && x[pos - 1] > x[pos] ){
            pos--;
        }
        if(pos < 0){
            reverse(x.begin(),x.end());
        } else {
            swap(x[pos],x[pos - 1]);
            reverse(x.begin() + pos + 1,x.end());
        }
        for(auto num : x) cout << num << " ";
        cout << endl;
    }
    return 0;
}