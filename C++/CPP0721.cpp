//https://code.ptit.edu.vn/student/question/CPP0721
//DÃY CON TĂNG DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test --)
    {
        int n, cnt = 1;
        cin >> n;
        vector<int> a(n);
        vector<int> res(n, 1);
        for(auto &x : a) cin >> x;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if(a[i] > a[j]){
                    res[i] = max(res[i], res[j] + 1);
                }
            }  
            cnt = max(res[i],cnt);
        }
        cout << cnt << endl;
    }
    return 0;
}