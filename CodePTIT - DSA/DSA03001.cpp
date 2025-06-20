//https://code.ptit.edu.vn/student/question/DSA03001
//ĐỔI TIỀN

#include <bits/stdc++.h>
using namespace std;

vector<int> MG = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, cnt = 0;
        cin >> n;
        for(int i = MG.size() - 1; i >=0; i--){
            int st = n / MG[i];
            n -= MG[i] * st;
            cnt += st;
        }
        cout << cnt << endl;
    }
    return 0;
}