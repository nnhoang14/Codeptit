//https://code.ptit.edu.vn/student/question/DSA03034
//DÃY CON CHUNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k, ok = 0;
        cin >> n >> m >> k;
        vector<int> a(n), b(m), c(k);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        int f = 0, s = 0, t = 0;
        while(f < n && s < m && t < k){
            if(a[f] == b[s] && b[s] == c[t]){
                cout << a[f] << " ";
                f++;
                s++;
                t++;
                ok = 1;
            }
            else if(a[f] < b[s]) f++;
            else if(b[s] < c[t]) s++;
            else t++;
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
    return 0;
}