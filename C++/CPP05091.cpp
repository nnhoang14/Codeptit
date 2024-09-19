//https://code.ptit.edu.vn/student/question/CPP05091
//HÌNH THOI RỖNG

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin>>num;
    int size = num * 2 - 1 , ct = num - 1;
    vector <vector<char>> tg(size, vector<char>(size,' '));
    for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
        if(i <= num - 1){
          if (j == ct - i || j == ct + i) tg[i][j] = '*';
        }
        else{
          if(j == i - ct  || j == size - 1 - (i - ct)) tg[i][j] = '*';
        }
      }
    }
    for(int i = 0; i < size ; i++){
      for(int j = 0; j < size; j++){
        cout << tg[i][j];
      }
      cout << endl;
    }
    return 0;
}
