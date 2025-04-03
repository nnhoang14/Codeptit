//https://code.ptit.edu.vn/student/question/DSA02010
//TỔ HỢP SỐ CÓ TỔNG BẰNG X

#include<bits/stdc++.h>
using namespace std;

int n, k, check;
vector<int> tmp, sol;

void Try(int i, int sum){
    if(sum == k){
        cout << "[";
        for(int j = 0; j < sol.size(); j++){
            cout << sol[j];
            if(j != sol.size() - 1) cout << " ";
        }
        cout << "]";
        check = 1;
        return;
    }
    for(int j = i; j < n; j++){
        if(sum + tmp[j] <= k){
            sol.push_back(tmp[j]);
            Try(j, sum + tmp[j]);
            sol.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        check = 0;
        cin >> n >> k;
        tmp.resize(n);
        for(auto &x : tmp) cin >> x;
        sort(tmp.begin(),tmp.end());
        Try(0, 0);
        if(!check) cout << "-1";
        cout << endl;
    }
    return 0;
}