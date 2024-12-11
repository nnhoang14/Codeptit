//https://code.ptit.edu.vn/student/question/CPP0737
//DÃY CON TRUNG BÌNH LỚN NHẤT

#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

int main() { 
    int test; 
    cin >> test; 
    while (test--) { 
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += a[i];
        }
        int l = 0, r = k - 1, tmp = sum;
        for(int i = k; i < n; i++){
            sum += a[i] - a[i - k];
            if(sum > tmp){
                tmp = sum;
                l = i - k + 1;
                r = i;
            }
        }
        for(int i = l; i <= r; i++) cout << a[i] << " ";
        cout << endl;
    } 
    return 0;
}