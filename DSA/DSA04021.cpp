//https://code.ptit.edu.vn/student/question/DSA04021
//DÃY XÂU NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int len[94];

void setup(){
    len[1] = len[2] = 1;
    for (int i = 3; i <= 93; i++)
        len[i] = len[i - 1] + len[i - 2];
}

int findChar(int n, int k){
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k <= len[n - 2]) return findChar(n - 2, k);
    else return findChar(n - 1, k - len[n - 2]);
}

int main(){
    int t;
    cin >> t;
    setup();
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << findChar(n, k) << endl;
    }
    return 0;
}