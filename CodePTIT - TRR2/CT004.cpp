//https://code.ptit.edu.vn/student/question/CT004
//Chu trình Hamilton 01

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, visited[MAX];
vector<int> ke[MAX], path;
vector<vector<int>> res;

void hmt(int i, int v) {
    if(i == n) {
        for(auto x : ke[v]) {
            if(x == u){
                path.push_back(u);
                res.push_back(path);
                path.pop_back();
                break;
            }
        }
        return;
    }

    for(auto x : ke[v]) {
        if(!visited[x]) {
            visited[x] = 1;
            path.push_back(x);
            hmt(i + 1, x);
            path.pop_back();
            visited[x] = 0;
        }
    }
}

int main(){
    cin >> n >> u;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x) ke[i].push_back(j);
        }
    }
    
    path.push_back(u);
    visited[u] = 1;
    hmt(1, u);

    cout << res.size() << endl;
    for(auto p : res) {
        for(auto x : p) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}