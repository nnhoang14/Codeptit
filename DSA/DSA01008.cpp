//https://code.ptit.edu.vn/student/question/DSA01008
//XÂU NHỊ PHÂN CÓ K BIT 1

#include <bits/stdc++.h>
using namespace std;

int check(vector<int> a, int k){
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 1) cnt++;
    }
    if(cnt == k) return 1;
    return 0;
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++){
            if(i >= (n - k)) a[i] = 1;
        }
        while (true){
            if(check(a, k)){
                for(auto x : a) 
                    cout << x;
                cout << endl;
            }
            int i = n - 1;
            while (i >= 0 && a[i] == 1){
                a[i] = 0;
                i--;
            }
            if(i < 0) break;
            a[i] = 1;
        }
    }
    return 0;
}