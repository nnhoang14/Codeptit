//https://code.ptit.edu.vn/student/question/DSA01007
//XÂU AB CÓ ĐỘ DÀI N

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int len;
        cin >> len;
        vector<char> res(len,'A');
        while (true){
            for(auto x : res) cout << x;
            cout << " ";
            int i = len - 1;
            while (i >= 0 && res[i] == 'B'){
                res[i] = 'A';
                i--;
            }
            if(i < 0) break;
            res[i] = 'B';
        }
        cout << endl;
    }
    return 0;
}