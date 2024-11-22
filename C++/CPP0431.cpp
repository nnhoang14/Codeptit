//https://code.ptit.edu.vn/student/question/CPP0434
//BIẾN ĐỔI DÃY SỐ - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(vector<int> a, int n, int k){
    sort(a.begin(),a.end());
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        auto it = lower_bound(a.begin() + i + 1,a.end(),a[i] + k);
        int x = it - (a.begin() + i) - 1;
        cnt += x;
    }
    return cnt;
}

int main(){
    int test;
    cin >> test;
    while (test -- ){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &x: a) cin >> x;
        cout << check(a,n,k) << endl;
    }
    return 0;
}