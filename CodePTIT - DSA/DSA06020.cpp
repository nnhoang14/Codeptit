//https://code.ptit.edu.vn/student/question/DSA06020
//TÌM KIẾM

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n, k,cnt = -1; 
        cin >> n >> k;
        int a[n];
        for(auto &x : a){
            cin >> x;
            if(x == k) cnt = 1;
        } 
        cout << cnt << endl;
    }
    return 0;
}