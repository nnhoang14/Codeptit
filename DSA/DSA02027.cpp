//https://code.ptit.edu.vn/student/question/DSA_P029
//HÀNH TRÌNH DU LỊCH - 1

#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> c;
vector<int> visited, X;

void Try(int i){
    for(int j = 0; j < n; j++){
        if(!visited[j]){
            visited[j] = 1;
            
        }
    }
}

int main(){
    cin >> n;
    c.assign(n, vector<int>(n));
    visited.assign(n, 0);
    for(auto &i : c)
        for(auto &j : i)
            cin >> j;
    Try(1);
    return 0;
}