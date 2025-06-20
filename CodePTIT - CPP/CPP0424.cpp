//https://code.ptit.edu.vn/student/question/CPP0424
//GHÉP DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int>(k));
        vector<int> res;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                cin >> a[i][j];
                res.push_back(a[i][j]);
            }
        }
        sort(res.begin(),res.end());
         for(int i = 0; i < res.size(); i++){
                cout << res[i] << " ";
            }
        cout << endl;
    }
    return 0;
}