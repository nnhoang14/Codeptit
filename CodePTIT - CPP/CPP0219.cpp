//https://code.ptit.edu.vn/student/question/CPP0219
//BIẾN ĐỔI NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

void processMatrix(int n, int m, vector<vector<int>>&a){
  set<int> update_rows;
  set<int> update_cols;
  
  for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
          if(a[i][j]==1){
            update_rows.insert(i);
            update_cols.insert(j);
          }
        }
    }
    
    
  vector<vector<int>> res(n, vector<int>(m,0));
  
  for (int i : update_rows) {
      for (int j = 0; j < m; ++j) {
        res[i][j]=1;
      }
  }
  
  for (int i : update_cols) {
      for (int j = 0; j < n; ++j) {
        res[j][i]=1;
      }
  }
  
  for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
          cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
  
}

int main() 
{
    int test;
    cin>>test;
    while(test--){
      int n,m;
      cin>>n>>m;
      vector<vector<int>> a(n, vector<int>(m));;
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
      processMatrix(n,m,a);
    }
    return 0;
}
