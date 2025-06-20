//https://code.ptit.edu.vn/student/question/DSA06003
//ĐỔI CHỖ ÍT NHẤT

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, cnt = 0;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - 1; i++){
            int pos = i;
            for(int j = i + 1; j < n; j++){
                if(a[pos] > a[j]) pos = j;
            }
            if(a[i] != a[pos]){
                swap(a[i],a[pos]);
                cnt++;
            }
        }
        cout << cnt << " " << endl;
    }
    return 0;
}