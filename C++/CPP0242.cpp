// https://code.ptit.edu.vn/student/question/CPP0261
// CỬA SỔ TRƯỢT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    if (n % m == 0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                a[i][j] *= b[i % m][j % m];
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}