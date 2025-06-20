//https://code.ptit.edu.vn/student/question/DSA10005
//CHU TRÌNH EULER TRONG ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
#define MAX 1005
using namespace std;

int n, m, visited[MAX], in_deg[MAX], out_deg[MAX];
multiset<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u])
        if(!visited[v]) DFS(v);
}

int isStrong(){
    for(int u = 1; u <= n; u ++){
       DFS(u);
       for(int i = 1; i <= n; i ++)
            if(!visited[i])
                return 0;
    } 
    return 1;
}

int check(){
    if(!isStrong()) return 0;
    else {
        for(int u = 1; u <= n; u++)
            if(out_deg[u] != in_deg[u]) return 0;
    }return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            in_deg[i] = out_deg[i] = visited[i] = 0;
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].insert(v);
            out_deg[u]++;
            in_deg[v]++;
        }
        cout << (check() ? "1" : "0") << endl;
    }
    return 0;
}