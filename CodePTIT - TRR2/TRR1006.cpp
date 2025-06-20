//https://code.ptit.edu.vn/student/question/TRR1006
//1.6 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m;
vector<int> ke[MAX];
vector<pair<int, int>> dscanh;
void option1() {
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
    }
}

void option2() {
    cout << n << " " << m << endl;
    vector<vector<int>> mt(n, vector<int>(m, 0));
    for(int j = 0; j < m; j++){
        mt[dscanh[j].first - 1][j] = 1;
        mt[dscanh[j].second - 1][j] = 1;
    }
    for(auto i : mt){
        for(auto j : i){
            cout << j << " ";
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
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
        dscanh.push_back({u, v});
    }
    
    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}