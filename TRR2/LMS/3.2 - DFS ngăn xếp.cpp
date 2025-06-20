//3.2 - DFS ngăn xếp

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int n, A[MAX][MAX], chuaxet[MAX];

void Stack_DFS(int u){
    stack<int> st;
    st.push(u);
    chuaxet[u] = 0;
    cout << u << " ";
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int t = 1; t <= n; t++){
            if(A[s][t] == 1 && chuaxet[t] == 1){
                cout << t << " ";
                chuaxet[t] = 0;
                st.push(s);
                st.push(t);
                break;
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n ; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
        chuaxet[i] = 1;
    Stack_DFS(1);
}