//https://code.ptit.edu.vn/student/question/DSA06006
//SẮP XẾP [0 1 2]

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        multiset<int> a;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.insert(x);
        } 
        for(auto &x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}