//6.2 - Shortest path using Dijkstra algorithm

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int n, s, a[MAX][MAX], parent[MAX];

void Dijkstra(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    vector<int> dist (n + 1, 1e9);
    pq.push({0, s});
    dist[s] = 0;
    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        for(int i = 1; i <= n; i++){
            if(a[top.second][i]){
                if(top.first > dist[i]) continue;
                if(dist[i] > dist[top.second] + a[top.second][i]){
                    dist[i] = dist[top.second] + a[top.second][i];
                    parent[i] = top.second;
                    pq.push({dist[i], i});
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << "K/c " << s << " -> " << i << " = ";
        if(i == s){
            cout << "0; " << s << " <- " << s << endl;
            continue;
        }
        if(dist[i] == 1e9){
            cout << "INF" << endl;
            continue;
        }
        cout << dist[i] << "; ";
        vector<int> path;
        int j = i;
        while(j != s){
            path.push_back(j);
            j = parent[j];
        }
        path.push_back(s);
        for(int k = 0; k < path.size(); k++){
            if(k == path.size() - 1){
                cout << path[k] << endl;
                continue;
            }
            cout << path[k]  << " <- ";
        }
    }
}

int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    Dijkstra();
}
