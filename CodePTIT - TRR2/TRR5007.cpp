//https://code.ptit.edu.vn/student/question/TRR5007
//5.7 Đường đi ngắn nhất 

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, v, parent[MAX];
vector<pair<int, int>> ke[MAX];

void BellmanFord() {
    vector<int> dist(n + 1, 10000);
    dist[u] = 0;

    for (int k = 1; k <= n - 1; k++) {
        for (int v = 1; v <= n; v++) {
            for (auto e : ke[v]) {
                int i = e.first;
                int w = e.second;
                if (dist[v] != 10000 && dist[i] > dist[v] + w) {
                    dist[i] = dist[v] + w;
                    parent[i] = v;
                }
            }
        }
    }

    for (int v = 1; v <= n; v++) {
        for (auto e : ke[v]) {
            int i = e.first;
            int w = e.second;
            if (dist[v] != 10000 && dist[i] > dist[v] + w) {
                cout << -1;
                return;
            }
        }
    }

    if (dist[v] == 10000) {
        cout << 0;
        return;
    }
    cout << dist[v] << endl;

    vector<int> path;
    int cur = v;
    while (cur != u) {
        path.push_back(cur);
        cur = parent[cur];
    }
    path.push_back(u);
    reverse(path.begin(), path.end());
    for (int x : path) cout << x << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("BN.INP", "r", stdin);
    freopen("BN.OUT", "w", stdout);

    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= n; j++){ 
            int x; cin >> x;
            if(x != 10000 && i != j)
                ke[i].push_back({j, x});
        }
    }
    BellmanFord();

    return 0;
}