//https://code.ptit.edu.vn/student/question/DSA09001
//CHUYỂN DANH SÁCH CẠNH SANG DANH SÁCH KỀ

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m;
vector<int> ke[MAX];

int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            ke[i].clear();
        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
    
        for(int i = 1; i <= n; i++) {
            cout << i << ": ";
            for(int v : ke[i]) 
                cout << v << " ";
            cout << endl;
        }
    }
    return 0;
}
