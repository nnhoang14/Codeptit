//https://code.ptit.edu.vn/student/question/CPP05092
//TAM GIÁC ĐỀU RỖNG

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin>>num;
    int ct = num - 1;
    vector <vector<char>> tg(num, vector<char>(num * 2,' '));
    for(int i = 0; i < num; i++){
      for(int j = 0; j < num * 2; j++){
        if((i != num - 1 && j == ct - i) || (i != num - 1 && j == ct + i)) tg[i][j] = '*';
        if(i == num - 1 && j % 2 == 0) tg[i][j] = '*';
      }
    }
    for(int i = 0; i < num; i++){
      for(int j = 0; j < num * 2; j++){
        cout << tg[i][j];
      }
      cout << endl;
    }
    return 0;
}
