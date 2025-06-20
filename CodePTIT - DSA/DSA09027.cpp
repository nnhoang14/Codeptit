//https://code.ptit.edu.vn/student/question/DSA09027
//KIỂM TRA ĐƯỜNG ĐI

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, t, q, vs[MAX], before[MAX];
vector<int> ke[MAX];

void DFS(int u){
    vs[u] = 1;
    for (auto i : ke[u]) {
        if (!vs[i]) DFS(i);
    }
}

int main(){
    int test;
    cin >> test;
    while (test--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            ke[i].clear();
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        cin >> q;
        while(q--){
            fill(vs, vs + n + 1, 0);
            fill(before, before + n + 1, 0);
            cin >> s >> t;
            DFS(s);
            cout << (vs[t] ? "YES" : "NO" ) << endl;
        }
    }
    return 0;
}