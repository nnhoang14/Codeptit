//https://code.ptit.edu.vn/student/question/DSAKT053
//SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string x, y;
        cin >> x >> y;
        int n = x.size(), m = y.size();
        int a[n + 1][m + 1];
        for(int i = 0 ; i <= n; i ++){
            for(int j = 0 ; j <= m; j ++){
                if(i == 0 || j == 0) a[i][j] = 0;
                else{
                    if(x[i - 1] == y[j - 1]) a[i][j] = a[i - 1][j - 1] + 1;
                    else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                }
            }
        }
        cout << a[n][m] << endl;
    }    
    return 0;
}