//https://code.ptit.edu.vn/student/question/CPP0260
//MA TRẬN XOẮN ỐC - 4

#include <bits/stdc++.h>
using namespace std;

void quaymt(vector<vector<int>> mt, vector<int> xs, int n){
    sort(xs.begin(),xs.end());
    int left = 0, top = 0, right = n - 1, bottom = n - 1, cnt = 0;
    while (top <= bottom && left <= right){
      for(int i = left; i <= right; i ++)
        mt[top][i] = xs[cnt++];
      top++;

      for(int i = top; i <= bottom; i ++)
        mt[i][right] = xs[cnt++];
      right--;

      if (top <= bottom) {
        for(int i = right; i >= left; i --)
          mt[bottom][i] = xs[cnt++];
        bottom--;
      }

      if (left <= right) {
        for(int i = bottom; i >= top; i --)
          mt[i][left] = xs[cnt++];
        left++;
      }
    }
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < n; j++){
        cout << mt[i][j] << " ";
      }
      cout << endl;
    }
}

int main() {
  int n;
  cin >> n ;
  vector<vector<int>> mt(n,vector<int>(n));
  vector<int> xs;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j ++){
      cin >> mt[i][j];
      xs.push_back(mt[i][j]);
    }
  }
  quaymt(mt,xs,n);
  cout << endl;
  return 0;
}