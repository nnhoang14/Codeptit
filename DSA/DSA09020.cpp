//https://code.ptit.edu.vn/student/question/DSA09020
//CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, a[MAX][MAX];

int main(){
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        int u;
        while(ss >> u){
            a[i][u] = 1;
            a[u][i] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}