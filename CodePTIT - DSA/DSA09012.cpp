//https://code.ptit.edu.vn/student/question/DSA09012
//LIỆT KÊ ĐỈNH TRỤ

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, visited[MAX];
vector<pair<int, int>> dscanh;
vector<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u])
        if(!visited[v]) DFS(v);
}

void dinhtru(){
    int tplt = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        int cnt = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                cnt++;
                DFS(j);
            }
        }
        if(cnt > tplt) cout << i << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        dscanh.clear();
        for(int i = 1; i <= n; i++)
            ke[i].clear();
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            dscanh.push_back({u, v});
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        dinhtru();
        cout << endl;
    }
    return 0;
}