//https://code.ptit.edu.vn/student/question/DSA09008
//ĐẾM SỐ THÀNH PHẦN LIÊN THÔNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, t, visited[MAX], before[MAX];
vector<int> ke[MAX];

void DFS(int u){
    visited[u] = true;
    for (int v : ke[u]) {
        if (!visited[v]) {
            before[v] = u;
            DFS(v);
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test--){
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = 0;
            before[i] = 0; 
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(s);
        if (!visited[t]){
            cout << "-1";
        } else {
            vector<int> path;
            while (t != s){
                path.push_back(t);
                t = before[t];
            }
            path.push_back(s);
            for (int i = path.size() - 1; i >= 0; i--){
                cout << path[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}