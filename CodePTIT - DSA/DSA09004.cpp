//https://code.ptit.edu.vn/student/question/DSA09004
//DFS TRÊN ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, chuaxet[MAX];
vector<int> ke[MAX];

void DFS(int u){
    chuaxet[u] = 1;
    cout << u << " ";
    for(auto v : ke[u])
        if(!chuaxet[v]) DFS(v);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m >> s;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            chuaxet[i] = 0;
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(s);
        cout << endl;
    }
    return 0;
}