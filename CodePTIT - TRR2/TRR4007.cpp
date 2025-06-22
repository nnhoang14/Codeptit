//https://code.ptit.edu.vn/student/question/TRR4007
//4.7 Cây khung

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, m, visited[MAX];
vector<int> ke[MAX];

struct canh{
    int dau, cuoi, w;
};
vector<canh> dscanh;

bool cmp(canh a, canh b) {
    if(a.w == b.w) {
        if(a.dau == b.dau) return a.cuoi < b.cuoi;
        return a.dau < b.dau;
    }
    return a.w < b.w;
}

void DFS(int u) {
    visited[u] = 1;
    for(int v : ke[u]) {
        if(!visited[v]) {
            DFS(v);
        }
    }
}

void Kruskal() {
    int dH = 0;
    vector<canh> res;
    sort(dscanh.begin(), dscanh.end(), cmp);
    for(auto it : dscanh) {
        memset(visited, 0, sizeof(visited));
        DFS(it.dau);
        if(!visited[it.cuoi]) {
            dH += it.w;
            res.push_back(it);
            ke[it.dau].push_back(it.cuoi);
            ke[it.cuoi].push_back(it.dau);
        }
        if(res.size() == n - 1) break;
    }
    cout << dH << endl;
    for(auto it : res) {
        cout << it.dau << " " << it.cuoi << " " << it.w << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen ("CK.INP", "r", stdin);
    freopen ("CK.OUT", "w", stdout);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        dscanh.push_back({u, v, w});
    }

    Kruskal();

    return 0;
}