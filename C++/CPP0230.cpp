//https://code.ptit.edu.vn/student/question/CPP0230
//MA TRẬN NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num,count=0;
    cin>>num;
    vector<vector<int>>matrix(num,vector<int>(3));
    for(int i = 0; i < num; i++){
      int dem=0;
      for(int j = 0; j < 3; j++){
        cin>>matrix[i][j];
        if(matrix[i][j]==1)dem++;
      }
      if(dem>1)count++;
    }
    cout<<count;
    return 0;
}
