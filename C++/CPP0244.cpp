//https://code.ptit.edu.vn/student/question/CPP0244
//LIỆT KÊ SỐ KHÁC NHAU

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin>>num;
    vector<int> matrix(num);
    vector<int> res;
    for(int i = 0; i < num; i++)
      cin>>matrix[i];
    res.push_back(matrix[0]); 
    for(int i = 1; i < num; i++){
      bool found = false;
      for(int j = 0; j < res.size(); j++){
        if(matrix[i]==res[j]){
          found = true;
          break;
        }
      }
      if(!found)res.push_back(matrix[i]);
    }
    sort(res.begin(),res.end());
    for(int i = 0; i < res.size(); i++)
      cout<<res[i]<<" ";
    return 0;
}
