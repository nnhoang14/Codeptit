//https://code.ptit.edu.vn/student/question/CTDL_002
//Tổng dãy con = K

#include<bits/stdc++.h>
using namespace std;

int check(vector<pair<int,int>> &a, int k){
    int sum = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i].second == 1) sum += a[i].first;
    }
    if(sum == k) return 1;
    return 0;
}

int main(){
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<pair<int,int>> a(n);
    for(auto &x : a) {
        cin >> x.first;
        x.second = 0;
    }
    while (true){
        int i = n - 1;
        while (i >= 0 && a[i].second == 1){
            a[i].second = 0;
            i--;
        }
        if(i < 0) break;
        a[i].second = 1;
        if(check(a, k)){
            for(auto x : a){
                if(x.second == 1) cout << x.first << " ";
            }
            cnt ++;
            cout << endl;
        }
    }
    cout << cnt;
    return 0;
}