//https://code.ptit.edu.vn/student/question/CPP0224
//ĐẾM SỐ MIỀN MA TRẬN

#include <bits/stdc++.h>
using namespace std;

int x[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int y[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int n, m;
int a[100][100];
void check(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k ++){
        int ni = i + x[k], nj = j + y[k];
        if(ni >= 0 && ni < n && nj >=0 && nj < m && a[ni][nj] == 1){
            check(ni,nj);
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test --){
        cin >> n >> m;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    cnt ++;
                    check(i,j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
