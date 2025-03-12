//https://code.ptit.edu.vn/student/question/DSA06009
//CẶP SỐ TỔNG BẰNG K

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, cnt = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - 1; i++)
            for(int j = i + 1; j < n; j++)
                if(k - a[i] == a[j]) cnt ++;
        cout << cnt << endl;
    }
    return 0;
}