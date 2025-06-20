//https://code.ptit.edu.vn/student/question/CPP0423
//SỐ NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, cnt = 0, d = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(int &x : a){
            cin >> x;
            if(x <= k) cnt++;
        }
        for(int i = 0; i < cnt; i++){
            if(a[i] <= k) d++; 
        }
        int res = d;
        for(int i = cnt; i < n; i++){
            if(a[i - cnt] <= k) d --;
            if(a[i] <= k)d ++;
            res = max(res ,d);
        }
        cout << cnt - res << endl;
    }
    return 0;
}