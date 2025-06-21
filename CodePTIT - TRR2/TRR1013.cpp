//https://code.ptit.edu.vn/student/question/TRR1013
//1.13 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, A[MAX][MAX], DegIn[MAX], DegOut[MAX];
vector<int> ke[MAX];

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << DegIn[i] << " " << DegOut[i] << endl;
    }
}

void option2() {
    cout << n << endl;
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
        for(auto x : ke[i]) {
            cout << x << " ";
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
                ke[i].push_back(j);
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