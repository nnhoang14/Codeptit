//https://code.ptit.edu.vn/student/question/DSA02006
//DÃY CON TỔNG BẰNG K

#include<bits/stdc++.h>
using namespace std;

int n, k, check = 0;
vector<int> tmp, sol;

int Try(int i, int sum){
    if(sum == k){
        cout << "[";
        for(int j = 0; j < sol.size(); j++){
            if(j == sol.size() - 1) cout << sol[j] << "] ";
            else cout << sol[j] << " ";
        }
        check = 1;
        //return;
    }
    for(int j = i; j < n; j++){
       if(sum + tmp[j] <= k){
            sol.push_back(tmp[j]);
            Try(j + 1, sum + tmp[j]);
            sol.pop_back();
       }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        tmp.resize(n);
        for(auto &x : tmp) cin >> x;
        Try(0, 0);
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
} 