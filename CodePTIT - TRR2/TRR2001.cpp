//https://code.ptit.edu.vn/student/question/TRR2001
//2.1 Đường đi

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, u, v, A[MAX][MAX];
bool visited[MAX], found = false;
vector<int> path;

void DFS(int u) {
    if(found) return;
    visited[u] = true;
    path.push_back(u);

    if(u == v) {
        found = true;
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(A[u][i] && !visited[i]) {
            DFS(i);
        }
    }

    if(!found) path.pop_back();
}

void option1() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(A[u][i] && A[i][v]) cnt++;
    }
    cout << cnt;
}

void option2() {
    DFS(u);
    if(found){
        for(auto x : path) {
            cout << x << " ";
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