//https://code.ptit.edu.vn/student/question/DSA09002
//CHUYỂN TỪ DANH SÁCH KỀ SANG DANH SÁCH CẠNH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1001

int n, a[MAX][MAX];

int main(){
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        int u;
        while(ss >> u){
            a[i][u] = 1;
            a[u][i] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i][j] == 1){
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}