//3.7 - Duyệt các đỉnh trụ

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];

void DFS(int u){
    chuaxet[u] = 1;
    for(int v = 1; v <= n; v++){
        if(!chuaxet[v] && A[u][v]){
            chuaxet[v] = 1;
            DFS(v);
        }
    }
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
    cin >> n;
    for(int i = 1; i <=n; i++)
        for(int j = 1; j <=n; j++)
            cin >> A[i][j];
    int origin = tplt();
    for(int i = 1; i <= n; i++){
        memset(chuaxet, 0, sizeof(chuaxet));
        chuaxet[i] = 1;
        if(origin < tplt())
            cout << i << " ";
    }
    return 0;
}