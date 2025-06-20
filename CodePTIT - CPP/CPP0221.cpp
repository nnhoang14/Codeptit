//https://code.ptit.edu.vn/student/question/CPP0221
//QUAY MA TRẬN

#include <bits/stdc++.h>
using namespace std;

void quaymt(vector<vector<int>> mt,vector<vector<int>> res, int n, int m){
    int left = 0, top = 0, right = m - 1, bottom = n - 1;
    while (top <= bottom && left <= right){
      for(int i = top; i <= bottom; i++){
        for(int j = left; j <= right; j++){
          if(i == top && j != left)res[i][j] = mt[i][j - 1];
          if(j == right && i + 1 <= bottom) res[i + 1][j] = mt[i][j];
          if(i == bottom && j + 1 <= right)res[i][j] = mt[i][j + 1];
          if(j == left && i + 1 <= bottom)res[i][j] = mt[i + 1][j];
        }
      }
      top ++;
      left ++;
      right --;
      bottom --;
    }
    for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j ++)
        cout << res[i][j] << " ";
}

int main() {
  int test;
  cin >> test;
  while (test--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mt(n,vector<int>(m));
    vector<vector<int>> res(n,vector<int>(m));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j ++){
        cin >> mt[i][j];
        res[i][j] = mt[i][j];
      }
    }
    quaymt(mt,res,n,m);
    cout << endl;
  }
  return 0;
}
