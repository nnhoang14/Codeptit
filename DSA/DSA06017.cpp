//https://code.ptit.edu.vn/student/question/DSA06017
//TRỘN HAI DÃY

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        multiset<int> uni;
        for(auto &x : a){
            cin >> x;
            uni.insert(x);
        } 
        for(auto &x : b){
            cin >> x;
            uni.insert(x);
        }
        for(auto x : uni)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}