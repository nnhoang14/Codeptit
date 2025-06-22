//https://code.ptit.edu.vn/student/question/CT003
//Chu trình Euler 03

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

int checkEuler() {
    memset(visited, 0, sizeof(visited));
    DFS(1);
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) return 0;
    }

    int l = 0, r = 0;
    for(int i = 1; i <= n; i++) {
        if(DegIn[i] != DegOut[i]){ 
            if(DegOut[i] - DegIn[i] == 1) r++;
            else if (DegIn[i] - DegOut[i] == 1) l++;
            else return 0;
        }
    }

    if (l == 0 && r == 0) return 1;
    else if (l == 1 && r == 1) return 2;
    return 0;
}

void option1() {
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        for(int j = 0; j < t; j++) {
            int v;
            cin >> v;
            A[i][v] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) {
            if(A[i][j] == 1) {
                B[i][j] = B[j][i] = 1;
                DegOut[i]++;
                DegIn[j]++;
            }
        }
    }
    cout << checkEuler(); 
}

void option2() {
    cin >> u;
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        for(int j = 0; j < t; j++) {
            int v;
            cin >> v;
            A[i][v] = 1;
        }
    }
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