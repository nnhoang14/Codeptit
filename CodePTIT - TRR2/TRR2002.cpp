//https://code.ptit.edu.vn/student/question/TRR2002
//2.2 Đường đi

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, u, v, A[MAX][MAX], parent[MAX];
bool visited[MAX];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    parent[u] = -1;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i = 1; i <= n; i++) {
            if(A[cur][i] && !visited[i]) {
                visited[i] = true;
                parent[i] = cur;
                if(i == v) return;
                q.push(i);
            }
        }
    }
}

void option1() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(A[u][i] && A[i][v]) cnt++;
    }
    cout << cnt;
}

void option2() {
    BFS(u);
    if(visited[v]){
        int cur = v;
        stack<int> path;
        while(cur != -1) {
            path.push(cur);
            cur = parent[cur];
        }
        while(!path.empty()) {
            cout << path.top() << " ";
            path.pop();
        }
    }
    else cout << 0 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);

    cin >> status >> n >> u >> v;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> A[i][j];
        }
    }

    if(status == 1) {
        option1();
    } else {
        option2();
    }
    return 0;
}