//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
//https://code.ptit.edu.vn/student/question/CPP0727
//TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU

#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

ll sum(vector<int> &a, int n){
    if (n == 0) return 0;
    if (n == 1) return a[0];
    ll prev2 = 0, prev = a[0];
    ll res; 
    for(int i = 1; i < n; i ++){
        res = max(a[i] + prev2, prev);
        prev2 = prev;
        prev = res;
    }
    return res;
}

int main() { 
    int test; 
    cin >> test; 
    while (test--) { 
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        cout << sum(a,n) << endl;;
    } 
    return 0;
}