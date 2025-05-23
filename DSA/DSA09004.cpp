//https://code.ptit.edu.vn/student/question/DSA09004
//DFS TRÊN ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, a[MAX][MAX], chuaxet[MAX];

void DFS(int u){
    chuaxet[u] = 1;
    cout << u << " ";
    for(int v = 1; v <= n; v++){
        if(a[u][v] && !chuaxet[v]){
            DFS(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m >> s;
        for(int i = 1; i <= n; i++){
            fill(a[i], a[i] + n + 1, 0);
            chuaxet[i] = 0;
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }
        DFS(s);
        cout << endl;
    }
    return 0;
}