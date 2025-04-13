//https://code.ptit.edu.vn/student/question/DSA02017
//SẮP XẾP QUÂN HẬU 2

#include <bits/stdc++.h>
using namespace std;

int res, X[10][10], cot[10], d1[10], d2[10];

void Try(int i, int sum){
    for(int j = 1; j <= 8; j++){
        if(!cot[j] && !d1[i - j + 8] && !d2[i + j - 1]){
            cot[j] = d1[i - j + 8] = d2[i + j - 1] = 1;
            if(i == 8) res = max(res, sum + X[i][j]);
            else Try(i + 1, sum + X[i][j]);
            cot[j] = d1[i - j + 8] = d2[i + j - 1] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        for(int i = 1; i <= 8; i++)
            for(int j = 1; j <= 8; j++)
                cin >> X[i][j];
        for(int i = 1; i <= 8; i++)
            cot[i] = d1[i] = d2[i] = 0;
        res = 0;
        Try(1, 0);
        cout << res << endl;
    }
    return 0;
}