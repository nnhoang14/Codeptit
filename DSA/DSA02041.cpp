//https://code.ptit.edu.vn/student/question/DSA02041
//BIẾN ĐỔI VỀ 1

#include <bits/stdc++.h>
using namespace std;

int n, step;

void Try(int sum, int cnt) {
    if (cnt >= step) return;
    if (sum == 1) { 
        step = min(step, cnt); 
        return;
    }
    if(sum % 2 == 0) {
        Try(sum / 2, cnt + 1);
    }
    if(sum % 3 == 0) {
        Try(sum / 3, cnt + 1);
    }
    Try(sum - 1, cnt + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        step = INT_MAX;
        int tmp = n;
        Try(tmp, 0);
        cout << step << endl;
    }
    return 0;
}