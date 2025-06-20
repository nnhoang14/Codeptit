//https://code.ptit.edu.vn/student/question/DSA03006
//SẮP XẾP THAM LAM

#include <bits/stdc++.h>
using namespace std;

int check(vector<int> a){
    for(int i = 0; i < a.size() - 1; i++)
        if(a[i] > a[i + 1]) return 0;
    return 1;
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int m = n / 2 - 1;
        for(int i = m; i >= 0; i--)
            if(a[i] > a[n - 1 - i])
                swap(a[i], a[n - 1 - i]);
        if(check(a)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}