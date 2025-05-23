#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int n, m;

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // vì đồ thị vô hướng
    }

    for(int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end()); // nếu cần in theo thứ tự tăng dần
        cout << i << ": ";
        for(int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
