//https://code.ptit.edu.vn/student/question/DSA05005
//SỐ BƯỚC ÍT NHẤT

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
        for (int &x : a) cin >> x;
        vector<int> lis;
        for (int x : a) {
            auto it = upper_bound(lis.begin(), lis.end(), x);
            if (it == lis.end()) lis.push_back(x);
            else *it = x;
        }
        cout << n - lis.size() << endl;
    }
}