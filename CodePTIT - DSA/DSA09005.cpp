//https://code.ptit.edu.vn/student/question/DSA09005
//BFS TRÊN ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, a[MAX][MAX], chuaxet[MAX];

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = 1;
    cout << u << " ";
    while (!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if (a[v][i] && !chuaxet[i]){
                chuaxet[i] = 1;
                cout << i << " ";
                q.push(i);
            }
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
        BFS(s);
        cout << endl;
    }
    return 0;
}