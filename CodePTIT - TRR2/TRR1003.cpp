//https://code.ptit.edu.vn/student/question/TRR1003
//1.3 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n;
vector<int> ke[MAX];
vector<pair<int, int>> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
    }
}

void option2() {
    cout << n << " " << dscanh.size() << endl;
    vector<vector<int>> mt(n, vector<int>(dscanh.size(), 0));
    for(int j = 0; j < dscanh.size(); j++) {
        mt[dscanh[j].first - 1][j] = 1;
        mt[dscanh[j].second - 1][j] = 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < dscanh.size(); j++) {
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

    cin >> status >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x && i < j) {
                ke[i].push_back(j);
                ke[j].push_back(i);
                dscanh.push_back({i, j});
            }
        }
    }
    
    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}