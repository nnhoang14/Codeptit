//https://code.ptit.edu.vn/student/question/DSA02016
//SẮP XẾP QUÂN HẬU 1

#include <bits/stdc++.h>
using namespace std;

int n, cnt, X[100], cot[100], d1[100], d2[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!cot[j] && !d1[i - j + n] && !d2[i + j - 1]){
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            X[i] = j;
            if(i == n) cnt++;
            else Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for(int i = 1; i <= n; i++)
            cot[i] = d1[i] = d2[i] = 0;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}