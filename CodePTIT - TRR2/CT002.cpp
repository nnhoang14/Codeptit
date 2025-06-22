//https://code.ptit.edu.vn/student/question/CT002
//Chu trình Euler 02

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, u, A[MAX][MAX], visited[MAX], Deg[MAX];

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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){ 
            cin >> A[i][j];
            if(A[i][j] && i < j) {
                Deg[i]++;
                Deg[j]++;
            }
        }
    }
    
    DFS(1);
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cout << 0;
            return;
        }
    }

    int oddCount = 0;
    for(int i = 1; i <= n; i++) {
        if(Deg[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    if (oddCount == 0) cout << 1; 
    else if (oddCount == 2) cout << 2;
    else cout << 0;
}

void option2() {
    cin >> u;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) 
            cin >> A[i][j];
    Euler(u);
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);                
    cout.tie(NULL);

    //freopen("CT.out", "r", stdin);
    //freopen("CT.in", "w", stdout);

    cin >> status >> n;
    if(status == 1) {
        option1();
    } else {
        option2();
    }

    return 0;
}