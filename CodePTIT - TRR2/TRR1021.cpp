//https://code.ptit.edu.vn/student/question/TRR1021
//1.21 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, A[MAX][MAX], DegIn[MAX], DegOut[MAX];

struct Canh{
    int u, v, w;
};

vector<Canh> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << DegIn[i] << " " << DegOut[i] << endl;
    }
}

void option2() {
    cout << n << " " << dscanh.size() << endl;
    for(auto x : dscanh) {
        cout << x.u << " " << x.v << " " << x.w << endl;
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
            if(A[i][j] != 10000 && i != j) {
                DegOut[i]++;
                DegIn[j]++;
                dscanh.push_back({i, j, A[i][j]});
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