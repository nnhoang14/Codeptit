//3.1 - DFS đệ quy

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];

void DFS(int u){
    cout << u << " ";
    chuaxet[u] = 0;
    for(int v = 1; v <= n; v++){
        if((A[u][v] == 1) && (chuaxet[v] == 1))
            DFS(v);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];
    for(int i = 1; i <= n; i++)
        chuaxet[i] = 1;
    DFS(1);
    return 0;
}