//https://code.ptit.edu.vn/student/question/TRR1008
//1.8 Đồ thị

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m, A[MAX][MAX];
vector<int> ke[MAX];
vector<pair<int, int>> dscanh;

void option1() {
    for(int i = 1; i <= n; i++) {
        cout << ke[i].size() << " ";
    }
}

void option2() {
    cout << n << " " << dscanh.size() << endl;
    for(auto x : dscanh) {
        cout << x.first << " " << x.second << endl;
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
    for(int i = 1; i <= n; i++){
        int t; 
        cin >> t;
        while(t --){
            int x; 
            cin >> x;
            if(i < x){ 
                ke[i].push_back(x);
                ke[x].push_back(i);
                dscanh.push_back({i, x});
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