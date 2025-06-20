//https://code.ptit.edu.vn/student/question/TRR2015
//2.15 Liên thông  

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];
vector<int> res;

void DFS(int u){
    chuaxet[u] = 1;
    for(int v = 1; v <= n; v++){
        if(!chuaxet[v] && A[u][v]){
            chuaxet[v] = 1;
            DFS(v);
        }
    }
}

int main(){
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <=n; i++)
        for(int j = 1; j <=n; j++)
            cin >> A[i][j];
    memset(chuaxet, 0, sizeof chuaxet);
    for(int i = 1; i <= n; i++)
        if(!chuaxet[i])
            DFS(i);
    
    return 0;
}