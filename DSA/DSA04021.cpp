//https://code.ptit.edu.vn/student/question/DSA04021
//DÃY XÂU NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int plusBit(int a, int b){
    if(a + b == 2) return 0;
    else return a + b;
}

int fiboBit(int k){
    if(k == 1) return 0;
    if(k == 2) return 1;
    return plusBit(fiboBit(k - 1), fiboBit(k - 2));
}

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        cout << fiboBit(k) << endl;
    }
    return 0;
}