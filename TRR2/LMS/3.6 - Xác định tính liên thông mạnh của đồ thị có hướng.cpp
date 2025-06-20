//3.6 - Xác định tính liên thông mạnh của đồ thị có hướng

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];
void DFS(int u){
    chuaxet[u] = 0;
    for(int v = 1; v <= n; v++)
        if(A[u][v] && chuaxet[v]) DFS(v);
}

void isStrong(){
    for(int u = 1; u <= n; u ++){
       for(int i = 1; i <= n; i ++) chuaxet[i] = 1;
       DFS(u);
       for(int i = 1; i <= n; i ++)
            if(chuaxet[i]){
                cout << "not strongly connected";
                return;
            }
    } 
    cout << "strongly connected";
    return;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];
    isStrong();
    return 0;
}