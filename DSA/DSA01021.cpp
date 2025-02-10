//https://code.ptit.edu.vn/student/question/DSA01021
//TỔ HỢP TIẾP THEO

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, k, cnt = 0;
        cin >> n >> k;
        vector<int> x(k);
        set<int> arr;
        for(auto &num : x){
            cin >> num;
            arr.insert(num);
        }
        int i = k - 1;
        while (i >= 0 && x[i] == (n - k + i + 1)){
            i--;
        }
        if(i < 0){
            cnt = k;
        } else {
            x[i] ++;
            for(int j = i + 1; j < k; j++)
                x[j] = x[j - 1] + 1;
            for(int j = i; j < k; j++){
                if(arr.count(x[j]) == 0) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}