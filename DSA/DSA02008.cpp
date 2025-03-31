//https://code.ptit.edu.vn/student/question/DSA02008
//CHỌN SỐ TỪ MA TRẬN VUÔNG CẤP N

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> sol;
void Try(int i, int a[][100]) {

}

int main() {
    cin >> n >> k;
    int a[n][n];
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            cin >> a[i][j];
    Try(0, a);
    return 0;
}
