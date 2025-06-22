//https://code.ptit.edu.vn/student/question/TRR4004
//4.4 Cây khung

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, visited[MAX];
vector<pair<int, int>> ke[MAX];

struct canh{
    int dau, cuoi, w;
};

void Prim(int u) {
    int dH = 0;
    visited[u] = 1;
    vector<canh> dscanh;
    while(dscanh.size() < n - 1) {
        int min_w = INT_MAX;
        int x = -1, y = -1;
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) continue;
            for(auto v : ke[i]) {
                if(!visited[v.first] && v.second < min_w) {
                    min_w = v.second;
                    x = i;
                    y = v.first;
                }
            }
        }
        
        if(x != -1 && y != -1) {
            dscanh.push_back({x, y, min_w});
            visited[y] = 1;
            dH += min_w;
        } else {
            cout << 0;
            return;
        }
    }
    cout << dH << endl;
    for(auto it : dscanh) {
        if(it.dau > it.cuoi) swap(it.dau, it.cuoi);
        cout << it.dau << " " << it.cuoi << " " << it.w << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen ("CK.INP", "r", stdin);
    freopen ("CK.OUT", "w", stdout);

    cin >> n >> u;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x != 10000 && i != j) 
                ke[i].push_back({j, x});
        }
    }

    Prim(u);
    
    return 0;
}
