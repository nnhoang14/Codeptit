//https://code.ptit.edu.vn/student/question/DSA02036
//DÃY CON CÓ TỔNG LẺ

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, vs;

int check(){
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(vs[i]) sum += a[i];
    return sum % 2 != 0;
}

void result(){
    for(int i = 0; i < n; i++)
        if(vs[i]) cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        vs[i] = j;
        if(i == n - 1){
            if(check()) result();
        }
        else Try(i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n);
        vs.resize(n);
        for(auto &x : a) cin >> x;
        sort(a.rbegin(), a.rend());
        Try(0);
    }
    return 0;
}
