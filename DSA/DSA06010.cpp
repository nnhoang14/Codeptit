//https://code.ptit.edu.vn/student/question/DSA06010
//SẮP XẾP CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<char> res;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(auto x : s)
                res.insert(x);
        }
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}