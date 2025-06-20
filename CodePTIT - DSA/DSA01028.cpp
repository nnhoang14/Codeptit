//https://code.ptit.edu.vn/student/question/DSA01028
//LIỆT KÊ TỔ HỢP

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, k;
    cin >> t >> k;
    set<int> rl;
    for(int i = 0; i < t; i++){
        int num;
        cin >> num;
        rl.insert(num);
    }
    vector<int> x(rl.begin(), rl.end());
    int n = x.size();
    vector<int> res(k);
    iota(res.begin(), res.end(), 0);
    while (true){
        for(auto num : res) cout << x[num] << " ";
        cout << endl;
        int i = k - 1;
        while (i >= 0 && res[i] == (n - k + i)){
            i--;
        }
        if(i < 0) break;
        res[i] ++;
        for(int j = i + 1; j < k; j++)
            res[j] = res[j - 1] + 1;
    }
    return 0;
}