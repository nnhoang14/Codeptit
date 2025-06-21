//https://code.ptit.edu.vn/student/question/TRR2015
//2.15 Liên thông  

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int  n, cnt = 0;
bool visited[MAX];
vector<int> ke[MAX];

void DFS(int u) {
    visited[u] = true;
    for(auto v : ke[u]) {
        if(!visited[v]) {
            DFS(v);
        }
    }
}

int check() {
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) return 0;
    }
    return 1;
}

void tplt(){
    for(int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        DFS(i);
        cnt += check();
    }

    if(cnt == n){
        cout << 1 << endl;
    } else if(!cnt) {
        cout << 0 << endl;
    } else {
        cout << 2 << endl;
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
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x) ke[i].push_back(j);
        }

    tplt();
    return 0;
}