//https://code.ptit.edu.vn/student/question/TRR3004
//3.4 Chu trình Euler

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int status, n, u, A[MAX][MAX], B[MAX][MAX], visited[MAX], DegIn[MAX], DegOut[MAX];

void DFS(int u) {
    visited[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(B[u][v] && !visited[v]) {
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
                A[v][i] = 0;
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
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> A[i][j];
            if(A[i][j]) {
                B[i][j] = B[j][i] = 1;
                DegOut[i]++;
                DegIn[j]++;
            }
        }
    }
    
    DFS(1);
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cout << 0 << endl;
            return;
        }
    }

    int diff = 0, l = 0, r = 0;
    for(int i = 1; i <= n; i++) {
        if(DegIn[i] != DegOut[i]){ 
            diff++;
            if(DegOut[i] - DegIn[i] == 1) r++;
            else if (DegIn[i] - DegOut[i] == 1) l++;
        }
    }

    if (diff == 0) cout << 1 << endl;
    else if (diff == 2 && l == 1 && r == 1) cout << 2 << endl;
    else cout << 0 << endl;
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

    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);

    cin >> status >> n;
    if(status == 1) {
        option1();
    } else {
        option2();
    }

    return 0;
}
