//https://code.ptit.edu.vn/student/question/DSA04010
//DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int sum = 0, best = INT_MIN;
        for(auto x : a){
            sum = max(x, sum + x);
            best = max(sum, best);
        }
        cout << best << endl;
    }
    return 0;
}