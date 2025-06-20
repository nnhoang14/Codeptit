//https://code.ptit.edu.vn/student/question/CPP0220
//BIÊN CỦA MA TRẬN

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    while(test--){
      int n;
      cin>>n;
      vector<vector<int>>matrix(n,vector<int>(n));
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          cin>>matrix[i][j];
        }
      }
      
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout<<matrix[i][j]<<" ";
          else cout<<"  ";
        }
        cout<<endl;
      }
    }
    return 0;
}
