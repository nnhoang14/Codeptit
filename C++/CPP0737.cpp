//https://code.ptit.edu.vn/student/question/CPP0738
//CỘNG 1 VÀ NHÂN ĐÔI

#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;

int main() { 
    int test; 
    cin >> test; 
    while (test--) { 
        int n;
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        ll cnt = 0;
        while (true){
            for(int i = 0; i < n; i++){
                if(a[i] % 2 == 1){
                    a[i]--;
                    cnt++;
                }
            }
            for(auto &x : a) x /= 2;
            cnt++;
            bool check = true;
            for(auto &x : a){
                if(x != 0) check = false;
                }
            if(check) break;
        }
        cout << cnt - 1 << endl;
    } 
    return 0;
}