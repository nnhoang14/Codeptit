//https://code.ptit.edu.vn/student/question/DSA01025
//ĐẶT TÊN - 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<char> a(k);
        for(int i = 0; i < k; i++) {
            a[i] = 'A' + i;
        }
        while (true){
            for(auto x : a) cout << x;
            cout << endl;
            int i = k - 1;
            while (i >= 0 && a[i] == 'A' + (n - k + i)){
                i--;
            }
            if(i < 0) break;
            a[i]++;
            for(int j = i + 1; j < k; j++)
                a[j] = a[j - 1] + 1;
        }
    }
    return 0;
}