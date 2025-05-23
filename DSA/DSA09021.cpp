//https://code.ptit.edu.vn/student/question/DSA09020
//CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, a[MAX][MAX];

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j]) cout << j << " ";
        } 
        cout << endl;
    }
    return 0;
}