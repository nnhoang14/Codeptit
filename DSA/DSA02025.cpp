//https://code.ptit.edu.vn/student/question/DSA02025
//KÝ TỰ LẶP

#include <bits/stdc++.h>
using namespace std;

int n, res = INT_MAX;
vector<string> a, tmp;
vector<bool> visited;

int countSame(string a, string b){
    int i = 0, j = 0, cnt = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] == b[j]){ 
            cnt++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return cnt;
}

void Try(int i, int cnt){
    if(cnt >= res) return;
    if(i == n){
        res = min(res, cnt);
        return;
    }
    for(int j = 0; j < n; j++){
        if(!visited[j]){ 
            visited[j] = true;
            tmp[i] = a[j];
            int new_cnt = cnt;
            if(i != 0) new_cnt += countSame(tmp[i], tmp[i - 1]);
            Try(i + 1, new_cnt);
            visited[j] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    a.resize(n);
    tmp.resize(n);
    visited.assign(n, false);
    for(auto &x : a) cin >> x;
    Try(0, 0);
    cout << res << endl;
    return 0;
}