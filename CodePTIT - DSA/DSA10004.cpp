//https://code.ptit.edu.vn/student/question/DSA10004
//ĐƯỜNG ĐI VÀ CHU TRÌNH EULER VỚI ĐỒ THỊ VÔ HƯỚNG

#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n, m, visited[MAX];
multiset<int> ke[MAX];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u])
        if(!visited[v]) DFS(v);
}

int isConnected(){
    memset(visited, 0, sizeof(visited));
    for(int u = 1; u <= n; u ++){
       DFS(u);
       int cnt = 0;
       for(int i = 1; i <= n; i ++){
            if(visited[i])cnt ++;
            if(cnt == n) return 1;
        }
    } 
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            ke[i].clear();

        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].insert(v);
            ke[v].insert(u);
        }

        if(!isConnected()) cout << 0 << endl;
        else {
            int odd = 0;
            for(int i = 1; i <= n; i++)
                if(ke[i].size() % 2 != 0) odd++;
    
            if(odd == 0) 
                cout << 2 << endl;
            else if(odd == 2) 
                cout << 1 << endl; 
            else 
                cout << 0 << endl;  
        }
    }
}