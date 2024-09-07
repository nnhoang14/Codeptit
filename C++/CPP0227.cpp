//https://code.ptit.edu.vn/student/question/CPP0227
//IN MA TRẬN - 1

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    while(test--){
      int num;
      cin>>num;
      vector<vector<int>>matrix(num,vector<int>(num));
      for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
          cin>>matrix[i][j];
        }
      }
      for(int i = 0; i < num; i++){
        int pt=num-1;
        for(int j = 0; j < num; j++){
          if(i%2==0)cout<<matrix[i][j]<<" ";
          else{
            cout<<matrix[i][pt]<<" ";
            pt--;
          }
        }
      }
      cout<<endl;
    }
    return 0;
}
