//https://code.ptit.edu.vn/student/question/CPP0217
//PHẦN TỬ NHỎ NHẤT THỨ K CỦA MA TRẬN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n,k;
        cin >> n >> k;
        vector<vector<int>> a(n,vector<int>(n));
        vector<int> sx;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n ; j++) {
                cin >> a[i][j];
                sx.push_back(a[i][j]);
                }
        }
        sort(sx.begin(),sx.end());
        cout << sx[k - 1] << endl;

    }
    return 0;
}