//https://code.ptit.edu.vn/student/question/DSA09003
//BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1001

int n, m, a[MAX][MAX];

int main(){
     int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            fill(a[i], a[i] + n + 1, 0);
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            a[u][v] = 1;
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int j = 1; j <= n; j++){
                if(a[i][j] == 1){
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}