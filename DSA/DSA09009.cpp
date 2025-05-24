//https://code.ptit.edu.vn/student/question/DSA09009
//TÌM SỐ THÀNH PHẦN LIÊN THÔNG VỚI BFS

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, visited[MAX];
vector<pair<int, int>> dscanh;
vector<int> ke[MAX];

void BFS(int u){
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 0; i < ke[v].size(); i++){
            if(!visited[ke[v][i]]){
                visited[ke[v][i]] = 1;
                q.push(ke[v][i]);
            }
        }
    }
}

void tplt(){
    int tplt = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            BFS(i);
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