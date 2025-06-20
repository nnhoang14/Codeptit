//3.3 - BFS hàng đợi

#include<bits/stdc++.h>
using namespace std;

int n, a[1005][1005], visited[1005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    cout << u << " ";
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(!visited[i] && a[v][i] == 1){
                visited[i] = 1;
                cout << i << " ";
                q.push(v);
                q.push(i);
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    bfs(1);
    return 0;
}