//https://code.ptit.edu.vn/student/question/TRR4001
//4.1 Cây khung

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, u, visited[MAX];
vector<int> ke[MAX];
vector<pair<int, int>> dscanh;

void DFS(int u){
    visited[u] = 1;
    for(auto v : ke[u]){
        if(!visited[v]){
            dscanh.push_back({u, v});
            DFS(v);
        }
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int curr = q.front(); q.pop();
        for(int v : ke[curr]){
            if(!visited[v]){
                dscanh.push_back({curr, v});
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen ("CK.INP", "r", stdin);
    freopen ("CK.OUT", "w", stdout);

    cin >> status >> n >> u;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x) ke[i].push_back(j);
        }
    }
    
    if(status == 1) DFS(u);
    else BFS(u);

    if(dscanh.size() != n - 1){
        cout << 0;
    } else {
        cout << n - 1 << endl;
        for(auto canh : dscanh){
            cout << min(canh.first, canh.second) << " " << max(canh.first, canh.second) << endl;
        }
    }

    return 0;
}