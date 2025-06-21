//https://code.ptit.edu.vn/student/question/TRR1011
//1.11 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m, A[MAX][MAX], Deg[MAX];

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << Deg[i] << " ";
    }
}

void option2() {
    cout << n << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    cin >> status >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) {
            if(i == j)A[i][j] = 0;
            else A[i][j] = 10000;
        }
    }

    for(int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        Deg[u]++;
        Deg[v]++;
        A[u][v] = w;
        A[v][u] = w;
    }

    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}