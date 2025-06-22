//https://code.ptit.edu.vn/student/question/CT005
//Chu trình Hamilton 02

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, sum_min = INT_MAX, A[MAX][MAX], visited[MAX];
vector<pair<int, int>> ke[MAX];
vector<int> path, res;
void hmt(int i, int v, int sum) {
    if(sum > sum_min) return;
    if(i == n + 1 && v == u) {
        for(int j = 1; j <= n; j++) {
            if(!visited[j]) return;
        }
        res = path;
        sum_min = min(sum_min, sum);
        return;
    }
    for(auto x : ke[v]) {
        if(!visited[x.first]) {
            visited[x.first] = 1;
            path.push_back(x.first);
            hmt(i + 1, x.first, sum + x.second);
            path.pop_back();
            visited[x.first] = 0;
        }
    }
}

int main(){
    cin >> n >> u;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> A[i][j];
            if(A[i][j]>0 && A[i][j]<=50 && i != j) {
                ke[i].push_back({j, A[i][j]});
            }
        }
    }

    path.push_back(u);
    hmt(1, u, 0);
    
    if(!res.empty()){
        cout << sum_min << endl;
        for(auto x : res) 
            cout << x << " ";
    } else {
        cout << 0;
    }

    return 0;
}