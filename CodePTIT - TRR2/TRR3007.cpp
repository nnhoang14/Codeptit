//https://code.ptit.edu.vn/student/question/TRR3007
//3.7 Chu trình Hamilton

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, visited[MAX];
vector<int> ke[MAX], path;
vector<string> res;

void hmt(int i, int v) {
    if(i == n) {
        for(auto x : ke[v]) {
            if(x == u) {
                string s = "";
                for(auto x : path) s += to_string(x) + " ";
                s+= to_string(u);
                res.push_back(s);
                return;
            }
        }
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);


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
    
    if(!res.empty()){
        for(auto p : res) {
            cout << p << endl;
        }
        cout << res.size();
    } else {
        cout << 0;
    }

    return 0;
}