//https://code.ptit.edu.vn/student/question/CTDL_001
//THUẬT TOÁN SINH

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int len = (n + 1) / 2;
    vector<int> res(len,0);
    while (true){
        for(int i = 0; i < len; i++){
            cout << res[i] << " ";
        }
        for(int i = len - 1; i >= 0; i--){
            cout << res[i] << " ";
        }
        cout << endl;
        int i = len - 1;
        while (i >= 0 && res[i] == 1){
            res[i]--;
            i--;
        }
        if(i < 0)break;
        res[i] = 1;
    }
    return 0;
}