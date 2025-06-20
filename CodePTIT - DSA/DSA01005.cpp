//https://code.ptit.edu.vn/student/question/DSA01005
//SINH HOÁN VỊ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> x(n);
        iota(x.begin(), x.end(), 1);
        while (true){  
            for(auto num : x) cout << num;
            cout << " ";
            int pos = n - 2, i = n - 1;
            while (pos >= 0 && x[pos] > x[pos + 1] ){
                pos--;
            }
            if(pos < 0) break;
            while (x[i] < x[pos]){ 
                i --;
            }
            swap(x[pos],x[i]);
            reverse(x.begin() + pos + 1,x.end());
        }
        cout << endl;
    }
    return 0;
}