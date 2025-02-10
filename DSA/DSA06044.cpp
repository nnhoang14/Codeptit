//https://code.ptit.edu.vn/student/question/DSA06044
//SẮP XẾP CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), odd, even;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        if(i % 2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.rbegin(),odd.rend());
    int c = 0, l = 0;
    for(int i = 0; i < n ; i++){
        if(i % 2 == 0) cout << even[l++] << " ";
        else cout << odd[c++] << " ";
    }
    return 0;
}