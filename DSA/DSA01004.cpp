//https://code.ptit.edu.vn/student/question/DSA01004
//SINH TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        vector<int> x(k);
        for(int i = 0; i < k; i++) x[i] = i + 1;
        while (true){
            for(auto num : x) cout << num;
            cout << " ";
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
        cout << endl;
    }
    return 0;
}