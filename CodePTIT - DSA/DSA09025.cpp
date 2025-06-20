//https://code.ptit.edu.vn/student/question/DSA09025
//ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ CÓ HƯỚNG

#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n, m, s, t, a[MAX][MAX], vs[MAX], before[MAX];

void DFS(int u){
    stack<int> st;
    st.push(u);
    vs[u] = 1;
    while (!st.empty()){
        int v = st.top();
        st.pop();
        for(int i = 1; i <= n; i++){
            if (a[v][i] && !vs[i]){
                vs[i] = 1;
                st.push(v);
                st.push(i);
                before[i] = v;
                break;
            }
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test--){
        cin >> n >> m >> s >> t;
        for(int i = 1; i <= n; i++){
            fill(a[i], a[i] + n + 1, 0);
            vs[i] = 0;
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            a[u][v] = 1;
        }
        DFS(s);
        if (!vs[t]){
            cout << "-1";
        } else {
            vector<int> path;
            while (t != s){
                path.push_back(t);
                t = before[t];
            }
            path.push_back(s);
            for (int i = path.size() - 1; i >= 0; i--){
                cout << path[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}