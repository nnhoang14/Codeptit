//https://code.ptit.edu.vn/student/question/TRR2030
//2.30 Cạnh cầu 

#include<bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, A[MAX][MAX], visited[MAX];
vector<pair<int, int>> dscanh, res;

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(A[v][i] && !visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int tplt(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt ++;
            BFS(i);
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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> A[i][j];
            if(A[i][j] && i < j)
                dscanh.push_back({i,j});
        }
    }

    int original = tplt();
    for(auto it : dscanh){
        memset(visited, 0, sizeof(visited));
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