//https://code.ptit.edu.vn/student/question/TRR1010
//1.10 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, A[MAX][MAX], Deg[MAX];

struct Canh {
    int u, v, w;
};

vector<Canh> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << Deg[i] << " ";
    }
}

void option2() {
    cout << n << " " << dscanh.size() << endl;
    for(auto canh : dscanh) {
        cout << canh.u << " " << canh.v << " " << canh.w << endl;
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
            if(A[i][j] != 10000 && i < j) {
                Deg[i]++;
                Deg[j]++;
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