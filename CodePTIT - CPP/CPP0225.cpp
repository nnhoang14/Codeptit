//https://code.ptit.edu.vn/student/question/CPP0225
//BIẾN ĐỔI MA TRẬN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test --){
        int n;
        cin >> n;
        int a[n][n];
        ll sl = 0, sum = 0;
        for(int i = 0; i < n; i ++){
            ll hang = 0;
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                sum += a[i][j];
                hang += a[i][j];
            }
            sl = max(sl,hang);
        }
        for(int i = 0; i < n; i ++){
            ll cot = 0;
            for(int j = 0; j < n; j++){
                cot += a[j][i];
            }
            sl = max(sl,cot);
        }
        cout << sl * n - sum << endl;
    }
    return 0;
}