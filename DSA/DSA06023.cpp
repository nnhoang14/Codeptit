//https://code.ptit.edu.vn/student/question/DSA06023
//SẮP XẾP ĐỔI CHỖ TRỰC TIẾP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j]) swap(a[i], a[j]);
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}