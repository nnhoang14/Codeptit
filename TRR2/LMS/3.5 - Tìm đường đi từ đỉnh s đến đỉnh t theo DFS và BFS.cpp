//3.5 - Tìm đường đi từ đỉnh s đến đỉnh t theo DFS và BFS

#include<bits/stdc++.h>
using namespace std;
int n, s, t;
stack<int> st;
queue<int> q;
vector<int> before(100,0);

void listans(string ss){
    cout << ss << " " << t << " ";
    int u = t;
    while(u != s){
        u = before[u];
        cout << u << " ";
    }
    cout << endl;
}

int main(){
    cin >> n >> s >> t;
    vector<vector<int>> a(n+1, vector<int>(n+1));
    vector<bool> vs(n+1, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    st.push(s);
    vs[s] = true;
    while(st.size()){
        int u = st.top();
        st.pop();
        for(int i = 1; i <= n; i++){
            if(a[u][i] == 1 && !vs[i]){
                vs[i] = true;
                st.push(u);
                st.push(i);
                before[i] = u;
                break;
            }
        }
    }
    if(!before[t]){
        cout << "no path";
        return 0;
    }
    listans("DFS path");
    fill(before.begin(),before.end(),0);
    fill(vs.begin(),vs.end(),false);
    q.push(s);
    vs[s] = true;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(a[u][i] == 1 && !vs[i]){
                q.push(i);
                vs[i] = true;
                before[i] = u;
            }
        }
    }
    listans("BFS path:");
}