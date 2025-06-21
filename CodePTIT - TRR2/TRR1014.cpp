//https://code.ptit.edu.vn/student/question/TRR1014
//1.14 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, A[MAX][MAX], DegIn[MAX], DegOut[MAX];
vector<pair<int, int>> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << DegIn[i] << " " << DegOut[i] << endl;
    }
}

void option2() {
    cout << n << " " << dscanh.size() << endl;
    vector<vector<int>> mt(n, vector<int>(dscanh.size(), 0));
    for(int i = 0; i < dscanh.size(); i++) {
        mt[dscanh[i].first-1][i] = 1;
        mt[dscanh[i].second-1][i] = -1;
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
        for(int j = 1; j <= n; j++) {
            cin >> A[i][j];
            if(A[i][j]){
                DegOut[i]++;
                DegIn[j]++;
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