//https://code.ptit.edu.vn/student/question/DSA02037
//DÃY CON CÓ TỔNG NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, vs;

int Prime(int num){
    if(num < 2) return 0;
    for(int i = 2; i <= sqrt(num); i++) 
        if(num % i == 0) return 0;
    return 1;
}

int check(){
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(vs[i]) sum += a[i];
    return Prime(sum);
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
