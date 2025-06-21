//https://code.ptit.edu.vn/student/question/TRR2024
//2.24 Đỉnh trụ 

#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

int n;
bool visited[MAX];
vector<int> res, ke[MAX];

void DFS(int u){
    visited[u] = true;
    for(auto v : ke[u])
        if(!visited[v])
            DFS(v);
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt ++;
            DFS(i);
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);                
    cout.tie(NULL);

    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);

    cin >> n;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n; j++){
            int x;
            cin >> x;
            if(x) ke[i].push_back(j);
        }
    }
    int origin = tplt();
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if(origin < tplt())
            res.push_back(i);
    }

    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << " ";
    return 0;
}