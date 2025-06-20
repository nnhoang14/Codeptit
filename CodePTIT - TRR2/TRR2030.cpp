//https://code.ptit.edu.vn/student/question/TRR2030
//2.30 Cạnh cầu 

#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, A[MAX][MAX], chuaxet[MAX];
vector<pair<int, int>> dscanh, res;

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(A[v][i] && !chuaxet[i]){
                chuaxet[i] = 1;
                q.push(i);
            }
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!chuaxet[i]){
            cnt ++;
            BFS(i);
        }
    }
    return cnt;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> A[i][j];
            if(A[i][j] && i < j)
                dscanh.push_back({i,j});
        }
    }
    int original = tplt();
    sort(dscanh.begin(), dscanh.end(), cmp);
    for(auto it : dscanh){
        memset(chuaxet, 0, sizeof(chuaxet));
        int x = it.first;
        int y = it.second;
        A[x][y] = 0;
        A[y][x] = 0;
        if(original < tplt()) 
            res.push_back({x,y});
        A[x][y] = 1;
        A[y][x] = 1;
    }
    cout << res.size() << endl;
    for(auto x : res)
        cout << x.first << " " << x.second << endl;
    return 0;
}