//https://code.ptit.edu.vn/student/question/DSA02004
//DI CHUYỂN TRONG MÊ CUNG 2

#include<bits/stdc++.h>
using namespace std;

int n, check;
int a[10][10];

void Try(int i, int j, string s){
    if(i == n - 1 && j == n - 1){
        cout << s << " ";
        check = 1;
        return;
    }
    a[i][j] = 0;
    if(i + 1 < n && a[i + 1][j])
        Try(i + 1, j, s + "D");
    if(j - 1 >= 0 && a[i][j - 1])
        Try(i, j - 1, s + "L");
    if(j + 1 < n && a[i][j + 1])
        Try(i, j + 1, s + "R");
    if(i - 1 >= 0 && a[i - 1][j])
        Try(i - 1, j, s + "U");
    a[i][j] = 1;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        check = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        if (a[0][0] && a[n - 1][n - 1])
            Try(0, 0, "");
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
}