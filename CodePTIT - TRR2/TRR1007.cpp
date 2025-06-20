//https://code.ptit.edu.vn/student/question/TRR1007
//1.7 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m, A[MAX][MAX];
vector<int> Deg;

void option1() {
    for(auto x : Deg) {
        cout << x << " ";
    }
}

void option2() {
    cout << n << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

//sai input mau

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    cin >> status >> n;
    for(int i = 0; i < n; i++){
        int t; 
        cin >> t;
        Deg.push_back(t);
        while(t --){
            int x; 
            cin >> x;
            A[i][x - 1] = 1;
            A[x - 1][i] = 1;
        }
    }
    if(status == 1){
        option1();
    } else {
        option2();
    }
    return 0;
}