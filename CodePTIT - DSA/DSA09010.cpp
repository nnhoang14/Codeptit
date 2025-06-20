//https://code.ptit.edu.vn/student/question/DSA09010
//KIỂM TRA TÍNH LIÊN THÔNG MẠNH

#include<bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, visited[MAX];
vector<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u])
        if(!visited[v]) DFS(v);
}

void isStrong(){
    for(int u = 1; u <= n; u ++){
       DFS(u);
       for(int i = 1; i <= n; i ++){
            if(!visited[i]){
                cout << "NO" << endl;
                return;
            }
        }
    } 
    cout << "YES" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i ++){
            ke[i].clear();
            visited[i] = 0;
        }
        for(int i = 1; i <= m; i ++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
        }
        isStrong();
    }
    return 0;
}