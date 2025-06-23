//https://code.ptit.edu.vn/student/question/TRR5016
//5.16 Đường đi ngắn nhất

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, dist[MAX][MAX], nex[MAX][MAX];

vector<int> reconstruct(int u, int v) {
    vector<int> path;
    path.push_back(u);
    while (u != v) {
        u = nex[u][v];
        path.push_back(u);
    }
    return path;
}

void Floyd() {
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(dist[i][k] == 10000 || dist[k][j] == 10000 || i == j) continue;
                if(dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    nex[i][j] = nex[i][k];
                }
            }
        }
    }

    int maxValue = INT_MIN;
    int u_ans = -1, v_ans = -1;
    for (int u = 1; u <= n; u++)
        for (int v = 1; v <= n; v++)
            if (u != v && dist[u][v] < 10000) {
                if (dist[u][v] > maxValue ||
                   (dist[u][v] == maxValue && make_pair(u, v) < make_pair(u_ans, v_ans))) {
                    maxValue = dist[u][v];
                    u_ans = u;
                    v_ans = v;
                }
            }

    if(maxValue == INT_MIN){
        cout << 0;
        return;
    }
    cout << u_ans << " " << v_ans << " " << maxValue << endl;
    vector<int> v = reconstruct(u_ans, v_ans);
    for(auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);

    cin >> n ;
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= n; j++){ 
            cin >> dist[i][j];
            if(dist[i][j] != 10000 && i != j) nex[i][j] = j;
            else nex[i][j] = -1;
        }
    }
    Floyd();

    return 0;
}