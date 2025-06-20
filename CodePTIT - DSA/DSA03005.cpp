//https://code.ptit.edu.vn/student/question/DSA03005
//CHIA MẢNG THÀNH HAI MẢNG CON CÓ TỔNG LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, sum = 0, mc = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
            sum += x;
        }
        sort(a.begin(),a.end());
        int en = min(k, n - k);
        for(int i = 0; i < en; i++)
            mc += a[i];
        cout << sum - 2*mc << endl;
    }
    return 0;
}