//https://code.ptit.edu.vn/student/question/DSA04020
//TÌM KIẾM NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int n, k;

int binary_search(vector<int> a, int l, int r){
    int m = (l + r) / 2;
    if(l > r) return 0;
    else{
        if(a[m] == k) return m + 1;
        else{
            if(a[m] > k) return binary_search(a, l, m - 1);
            else return binary_search(a, m + 1, r);
        }
    }
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int check = binary_search(a, 0, n - 1);
        if(check > 0) cout << check << endl;
        else cout << "NO" << endl;
    }
    return 0;
}