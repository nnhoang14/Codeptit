//https://code.ptit.edu.vn/student/question/DSA02038
//DÃY CON CÓ K PHẦN TỬ TĂNG DẦN

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, vs;
// 2 3 4 5
// 0 1/ 1 2/ 2 3/
void result(){
    for(int i = 0; i < n; i++)
        if(vs[i]) cout << a[i] << " ";
    cout << endl;
}

void Try(int i, int st){
    for(int j = st; j <= n - k + i; j++){
        vs[i] = a[j];
        if(i == k - 1){
            for(auto x : vs)
                cout << x << " ";
            cout << endl;
        }
        else Try(i + 1, j + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        a.resize(n);
        vs.resize(k);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        Try(0, 0);
    }
    return 0;
}
