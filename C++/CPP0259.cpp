#include <bits/stdc++.h>
using namespace std;

void input_matrix(vector<vector<int>>&A,int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>A[i][j];
        }
    }
}

void output_matrix(vector<vector<int>>&A,int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n,m,p;
    cin>>n>>m>>p;
    vector<vector<int>>A(n,vector<int>(m));
    vector<vector<int>>B(m,vector<int>(p));
    vector<vector<int>>res(n,vector<int>(p,0));
    input_matrix(A,n,m);
    input_matrix(B,m,p);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < m; k++){
                res[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    output_matrix(res,n,p);
    return 0;
}