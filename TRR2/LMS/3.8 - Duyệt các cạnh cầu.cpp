//3.8 - Duyệt các cạnh cầu

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];
vector<pair<int, int>> dscanh;

void DFS(int u){
    chuaxet[u] = 1;
    for(int v = 1; v <= n; v++)
        if(A[u][v] && !chuaxet[v]) DFS(v);
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

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main(){
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
            cout << x << " " << y << endl;
        A[x][y] = 1;
        A[y][x] = 1;
    }
    return 0;
}