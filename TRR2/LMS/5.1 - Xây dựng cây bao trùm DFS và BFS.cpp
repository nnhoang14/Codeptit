//5.1 - Xây dựng cây bao trùm DFS và BFS

#include <iostream>
#include <vector>
#include <queue>
//#define MAX 100
using namespace std;

struct edge{
    int x, y;
};

int n, m, check[1003];
vector<edge> T;
vector<int> ke[1003];

void DFS(int u){
    check[u] = 1;
    for(auto v : ke[u])
        if(!check[v]){
            edge e{u, v};
            T.push_back(e);
            DFS(v);
        }
}

void TreeDFS(){
    for(int u = 1; u <= n; u++) check[u] = 0;
    T.clear();
    DFS(m);
    cout << "DFS tree" << endl;
    for(edge e : T){
        if(e.x > e.y) swap(e.x, e.y);
        cout << e.x << " " << e.y << endl;
    }
}

void BFS(int u){
    check[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto t : ke[v])
            if(!check[t]){
                check[t] = 1;
                q.push(t);
                edge e{v, t};
                T.push_back(e);
            }
    }
}

void TreeBFS(){
    for(int i = 1; i <= n; i++) check[i] = 0;
    T.clear();
    BFS(m);
    cout << "BFS tree" << endl;
    for(edge e : T){
        if(e.x > e.y) swap(e.x, e.y);
        cout << e.x << " " << e.y << endl;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <=n; j++){
            int x;
            cin >> x;
            if(x && j > i){
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    TreeDFS();
    TreeBFS();
}