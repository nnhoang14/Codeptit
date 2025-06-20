//https://code.ptit.edu.vn/student/question/TRR1005
//1.5 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m;
vector<int> ke[MAX];

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
    }
}

void option2() {
    cout << n << endl;
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
        for(int j : ke[i]) cout << j << " ";
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
    }
    
    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}