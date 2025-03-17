//https://code.ptit.edu.vn/student/question/DSA06035
//DÃY TAM GIÁC DÀI NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> pos;
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n; i++){
            if(i == 0 && a[i] < a[i + 1]) pos.push_back(i);
            if(a[i] < a[i - 1] && a[i] < a[i + 1]) pos.push_back(i);
            if(i == n - 1 && a[i] < a[i - 1])pos.push_back(i);
        }
        int maxLen = 1;
        for(int i = 0; i < pos.size() - 1; i++){
            cout << pos[i] /* << "-" << pos[i + 1]  */<< "/";
            //maxLen = max(maxLen, pos[i + 1] - pos[i]);
        }
        cout /* << maxLen */ << endl;
    }
    return 0;
} 