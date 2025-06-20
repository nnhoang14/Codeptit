//3.4 - Đếm số thành phần liên thông

#include<bits/stdc++.h>
using namespace std;
int n,ans;
void dfs(int u, vector<vector<int>> &a, vector<bool> &vs){
    vs[u] = true;
    for(int i = 1; i <= n; i++){
        if(a[u][i] == 1 && !vs[i])dfs(i,a,vs);
    }
}

int main(){
    cin >> n;
    vector<vector<int>> a(n+1, vector<int>(n+1));
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> a[i][j];
        }
    }
    vector<bool> vs(n+1, false);
    for(int i = 1; i <= n; i ++){
        if(!vs[i]){
            ans++;
            dfs(i,a,vs);
        }
    }
    cout << ans;
    return 0;
}
