//https://code.ptit.edu.vn/student/question/DSA09013
//LIỆT KÊ CẠNH CẦU

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, visited[MAX];
vector<pair<int, int>> dscanh;
vector<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u]){
        if(!visited[v]) DFS(v);
    }
}

void DFS2(int u, int s, int t){
    visited[u] = 1;
    for(int v : ke[u]){
        if(u == s && v == t || u == t && v == s) continue;
        if(!visited[v]) DFS2(v, s, t);
    }
}

void canhcau(){
    int tplt = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    for(auto it : dscanh){
        int x = it.first, y = it.second;
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                cnt++;
                DFS2(i, x, y);
            }
        }
        if(cnt > tplt) cout << x << " " << y << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        dscanh.clear();
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            dscanh.push_back({u, v});
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        canhcau();
        cout << endl;
    }
    return 0;
}