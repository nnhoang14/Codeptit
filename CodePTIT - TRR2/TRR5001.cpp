//https://code.ptit.edu.vn/student/question/TRR5001
//5.1 Đường đi ngắn nhất

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, v, A[MAX][MAX], parent[MAX];
vector<pair<int, int>> ke[MAX];

void Dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> dist(n + 1, 10000);
    pq.push({0, u});
    dist[u] = 0;

    while(!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        for(auto x : ke[top.second]) {
            int i = x.first;
            int w = x.second;
            if(top.first > dist[i]) continue;
            if(dist[i] > dist[top.second] + w) {
                dist[i] = dist[top.second] + w;
                parent[i] = top.second;
                pq.push({dist[i], i});
            }
        }
    }

    if(dist[v] == 10000){
        cout << 0;
        return;
    }
    cout << dist[v] << endl;

    vector<int> path;
    int j = v;
    while(j != 0) {
        path.push_back(j);
        j = parent[j];
    }
    reverse(path.begin(), path.end());
    for(auto x : path) cout << x << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("DN.INP", "r", stdin);
    //freopen("DN.OUT", "w", stdout);

    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= n; j++){ 
            int x; cin >> x;
            if(x != 10000 && i != j)
                ke[i].push_back({j, x});
        }
    }
    Dijkstra();

    return 0;
}