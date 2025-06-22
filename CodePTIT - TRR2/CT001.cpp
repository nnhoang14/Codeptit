//https://code.ptit.edu.vn/student/question/CT001
//Chu trình Euler 01

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, m, u, A[MAX][MAX], visited[MAX], Deg[MAX];

void DFS(int u) {
    visited[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(A[u][v] && !visited[v]) {
            DFS(v);
        }
    }
}

void Euler(int u) {
    stack<int> st, ce;
    st.push(u);
    while(!st.empty()) {
        int v = st.top(), isEmpty = 0;
        for(int i = 1; i <= n; i++) {
            if(A[v][i]) {
                isEmpty = 1;
                A[v][i] = A[i][v] = 0;
                st.push(i);
                break;
            }
        }

        if(!isEmpty){
            st.pop();
            ce.push(v);
        }  
    }

    while(!ce.empty()) {
        cout << ce.top() << " ";
        ce.pop();
    }
}

void option1() {
    for(int i = 1; i <= m; i++){
        int v, t;
        cin >> v >> t;
        A[v][t] = A[t][v] = 1;
        Deg[v]++;
        Deg[t]++;
    }
    
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            DFS(i);
            cnt++;
        }
    }

    int res = 0;
    if (cnt == 1) {
        int oddCount = 0;
        for(int i = 1; i <= n; i++) {
            if(Deg[i] % 2 != 0) {
                oddCount++;
            }
        }
        res = (!oddCount) ? 1 : 2;
    }
    cout << res;
}

void option2() {
    cin >> u;
    for(int i = 1; i <= m; i++){
        int v, t;
        cin >> v >> t;
        A[v][t] = A[t][v] = 1;
    }
    Euler(u);
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);                
    cout.tie(NULL);

    //freopen("CT.out", "r", stdin);
    //freopen("CT.in", "w", stdout);

    cin >> status >> n >> m;
    if(status == 1) {
        option1();
    } else {
        option2();
    }

    return 0;
}