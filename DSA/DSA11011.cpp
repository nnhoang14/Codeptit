//https://code.ptit.edu.vn/student/question/DSA11011
//CÂY NHỊ PHÂN ĐỦ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> left(n + 1, -1), right (n + 1 , -1);
        for(int i = 1; i <= n; i++){
            int u, v;
            char c;
            cin >> u >> v >> c;
            if(c == 'L') left[u] = v;
            else right[u] = v;
        }
        for(int i = 1; i <= n; i++) {
            if((left[i] != -1 && right[i] == -1)|| (right[i] != -1 && left[i] == -1)){
                cout << "0" << endl;
                break;
            }
            if(i == n) cout << "1" << endl;
        }
    }
    return 0;
}