#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, A[MAX][MAX], chuaxet[MAX];
vector<int> res;

void DFS(int u){
    chuaxet[u] = 1;
    for(int v = 1; v <= n; v++)
        if(!chuaxet[v] && A[u][v])
            DFS(v);
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!chuaxet[i]){
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
    for(int i = 1; i <=n; i++)
        for(int j = 1; j <=n; j++)
            cin >> A[i][j];
    int origin = tplt();
    for(int i = 1; i <= n; i++){
        memset(chuaxet, 0, sizeof(chuaxet));
        chuaxet[i] = 1;
        if(origin < tplt())
            res.push_back(i);
    }
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(auto x : res) cout << x << " ";
    return 0;
}