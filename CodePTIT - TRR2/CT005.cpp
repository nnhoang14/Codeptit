//https://code.ptit.edu.vn/student/question/CT005
//Chu trình Hamilton 02

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, m, u, visited[MAX];
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
    cin >> n >> m >> u;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    
    path.push_back(u);
    visited[u] = 1;
    hmt(1, u);

    cout << res.size() << endl;
    for(auto p : res) {
        for(auto x : p) cout << x << " ";
        cout << endl;
    }
    return 0;
}