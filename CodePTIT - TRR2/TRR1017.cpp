//https://code.ptit.edu.vn/student/question/TRR1017
//1.17 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m, DegIn[MAX], DegOut[MAX];
vector<pair<int, int>> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << DegIn[i] << " " << DegOut[i] << endl;
    }
}

void option2() {
    cout << n << " " << m << endl;
    vector<vector<int>> mt(n, vector<int>(m, 0));
    for(int j = 0; j < m; j++) {
        mt[dscanh[j].first - 1][j] = 1;
        mt[dscanh[j].second - 1][j] = -1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << mt[i][j] << " ";
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
        DegOut[u]++;
        DegIn[v]++;
        dscanh.push_back({u, v});
    }

    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}