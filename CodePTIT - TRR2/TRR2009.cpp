//https://code.ptit.edu.vn/student/question/TRR2009
//2.9 Liên thông

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int  n, cnt = 0, A[MAX][MAX];
bool visited[MAX];
set<int> path[MAX];

void DFS(int u) {
    visited[u] = true;
    path[cnt].insert(u);
    for(int i = 1; i <= n; i++) {
        if(A[u][i] && !visited[i]) {
            DFS(i);
        }
    }
}

void tplt(){
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << endl;
    for(int i = 1; i <= cnt; i++) {
        for(auto v : path[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];

    tplt();
    return 0;
}