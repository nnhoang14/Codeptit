//https://code.ptit.edu.vn/student/question/TRR2015
//2.15 Liên thông  

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int  n, cnt = 0;
bool visited[MAX];
vector<int> ke[MAX], ke1[MAX];

void DFS(int u) {
    visited[u] = true;
    for(auto v : ke[u]) {
        if(!visited[v]) {
            DFS(v);
        }
    }
}

void DFS1(int u) {
    visited[u] = true;
    for(auto v : ke1[u]) {
        if(!visited[v]) {
            DFS1(v);
        }
    }
}

int isStrong(){
    for(int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        DFS(i);
        for(int i = 1; i <= n; i++) {
            if(!visited[i]) return 0;
        }
    }
    return 1;
}

int isWeak() {
    memset(visited, false, sizeof(visited));
    DFS1(1);
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) return 0;
    }
    return 1;
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
            if(x){ 
                ke[i].push_back(j);
                ke1[i].push_back(j);
                ke1[j].push_back(i);
            }
        }

    if(isStrong()){
        cout << 1 << endl;
    } else if(isWeak()) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}