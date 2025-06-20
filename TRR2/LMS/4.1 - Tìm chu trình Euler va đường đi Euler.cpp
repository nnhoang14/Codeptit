//4.1 - Tìm chu trình Euler va đường đi Euler

#include <iostream>
#include <stack> 
#define MAX 100
using namespace std;
int n, A[MAX][MAX], s;

void Euler(int u){
    stack<int> st, ce;
    st.push(u);
    while(!st.empty()){
        int s = st.top(), isEmpty = 0;
        for(int t = 1; t <= n; t++){
            if(A[s][t]){
                isEmpty = 1;
                A[s][t] = A[t][s] = 0;
                st.push(t);
                break;
            }
        }
        if(!isEmpty){
            st.pop();
            ce.push(s);
        }
    }
    while(!ce.empty()){
        cout << ce.top() << " ";
        ce.pop();
    }
}

int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];
    Euler(s);
}