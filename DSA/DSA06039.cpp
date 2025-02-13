//https://code.ptit.edu.vn/student/question/DSA06039
//SỐ ĐẦU TIÊN BỊ LẶP

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n, cnt = -1;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> x;
        for(auto &num : a){
            cin >> num;
            x[num] ++;
        }
        for(auto num : a){
            if(x[num] > 1){
                cout << num << endl;
                cnt++;
                break;
            }
        }
        if(cnt == -1) cout << "NO" << endl;
    }
    return 0;
}