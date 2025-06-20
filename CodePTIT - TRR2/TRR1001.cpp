//https://code.ptit.edu.vn/student/question/TRR1001
//1.1 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n;
vector<int> ke[MAX], visited(MAX, 0);
vector<pair<int, int>> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
    }
}

void option2() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(visited[i]) cnt++;
    }
    cout << cnt << " " << dscanh.size() << endl;
    for(auto &edge : dscanh) {
        cout << edge.first << " " << edge.second << endl;
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
                visited[i] = visited[j] = 1;
                dscanh.push_back({i, j});
                ke[i].push_back(j);
                ke[j].push_back(i);
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