//https://code.ptit.edu.vn/student/question/CPP0232
//HÌNH CHỮ NHẬT LỚN NHẤT - 1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test --){
        int n, m; 
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)); 
        for(int i = 0; i < n; i++){ 
            for(int j = 0; j < m; j ++){ 
                cin >> a[i][j];
                if(a[i][j] != 0 && i > 0) a[i][j] = a[i - 1][j] + 1;
            }
        }
        for(int i = 0; i < n; i++){
            sort(a[i].begin(),a[i].end(),greater<int>());
        }
        int area = 0;
        for(int i = 0; i < n; i++){ 
            for(int j = 0; j < m; j ++){ 
                area = max(area, a[i][j] * (j + 1));
            }
        }
        cout << area << endl;
    }
    return 0;
}