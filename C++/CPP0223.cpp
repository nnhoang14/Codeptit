//https://code.ptit.edu.vn/student/question/CPP0223
//MA TRẬN XOẮN ỐC - 1

#include <bits/stdc++.h>
using namespace std;

void quaymt(vector<vector<int>> mt, int n, int m){
    int left = 0, top = 0, right = m - 1, bottom = n - 1;
    while (top <= bottom && left <= right){
      for(int i = left; i <= right; i ++)
        cout << mt[top][i] << " ";
      top++;

      for(int i = top; i <= bottom; i ++)
        cout << mt[i][right] << " ";
      right--;

      if (top <= bottom) {
        for(int i = right; i >= left; i --)
          cout << mt[bottom][i] << " ";
        bottom--;
      }

      if (left <= right) {
        for(int i = bottom; i >= top; i --)
          cout << mt[i][left] << " ";
        left++;
      }
    }
}

int main() {
  int test;
  cin >> test;
  while (test--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mt(n,vector<int>(m));
    for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j ++)
        cin >> mt[i][j];
    quaymt(mt,n,m);
    cout << endl;
  }
  return 0;
}