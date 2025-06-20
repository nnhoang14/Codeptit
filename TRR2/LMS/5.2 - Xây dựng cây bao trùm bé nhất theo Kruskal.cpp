//5.2 - Xây dựng cây bao trùm bé nhất theo Kruskal

#include <bits/stdc++.h>
#define MAX 100
using namespace std;

typedef struct{
    int dau, cuoi, w;
} canh;

int n, ne, T[MAX][MAX], chuaxet[MAX];
canh E[MAX];

void T_DFS(int u){
    chuaxet[u] = 0;
    for(int v = 1; v <= n; v++)
        if(T[u][v] != 0 && chuaxet[v])
            T_DFS(v);
}

void Krukal(){
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            T[i][j] = 0;
    int dH = 0;
    for(int i = 1; i <= ne; i++)
        for(int j = ne; j > i; j--)
            if(E[j].w < E[j - 1].w)
                swap(E[j - 1], E[j]);
    for(int e = 1; e <= ne; e++){
        for(int i = 1; i <= n; i++) chuaxet[i] = 1;
        T_DFS(E[e].dau);
        if(chuaxet[E[e].cuoi]){
            dH += E[e].w;
            T[E[e].dau][E[e].cuoi] = T[E[e].cuoi][E[e].dau]= E[e].w;
        }
    }
    cout << "dH = " << dH << endl;
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
        if(T[i][j] != 0) cout << i << " " << j << endl;
     
}

int main(){
    cin >> n;
    ne = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x != 0 && i < j){
                ne++;
                E[ne].dau = i;
                E[ne].cuoi = j;
                E[ne].w = x;
            }
        }
    }
    Krukal();
}