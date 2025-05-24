//https://code.ptit.edu.vn/student/question/DSA09008
//ĐẾM SỐ THÀNH PHẦN LIÊN THÔNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, visited[MAX];
vector<pair<int, int>> dscanh;
vector<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(auto v : ke[u])
        if(!visited[v]) DFS(v);
}

void tplt(){
    int tplt = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    cout << tplt << endl;
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
        tplt();
    }
    return 0;
}