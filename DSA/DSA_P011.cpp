//https://code.ptit.edu.vn/student/question/DSA_P011
//ĐẾM SỐ VẬT CẢN TRÊN MÊ CUNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
vector<vector<char>> a;
vector<vector<int>> visited;

void search(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) return;
    if(a[i][j] == '#' && !visited[i][j]){
        visited[i][j] = 1;
        search(i + 1, j);
        search(i - 1, j);
        search(i, j + 1);
        search(i, j - 1);
    }
}

int main(){
    cin >> n >> m;
    a.resize(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    visited.resize(n, vector<int>(m, 0));
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '#' && !visited[i][j]){
                search(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}