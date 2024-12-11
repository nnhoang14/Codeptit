//https://code.ptit.edu.vn/student/question/CPP0730
//TỔNG LỚN NHẤT CỦA DÃY CON LIÊN TỤC

#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

int main() { 
    int test; 
    cin >> test; 
    while (test--) { 
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(auto &x : a) cin >> x;
        b[0] = a[0];
        for(int i = 1; i < n; i ++){
            if(b[i - 1] < 0) b[i] = a[i];
            else b[i] = b[i - 1] + a[i];
        }
        sort(b.begin(),b.end());
        cout << b.back() << endl;
    } 
    return 0;
}