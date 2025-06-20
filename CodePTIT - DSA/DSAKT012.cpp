//https://code.ptit.edu.vn/student/question/DSAKT012
//ĐỔI TIỀN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, min_count = INT_MAX;
bool found = false;
vector<int> money;

void Try(int i, int cnt, int sum){
    if (cnt >= min_count || sum > k || i == n) return;

    if (sum == k){
        min_count = min(min_count, cnt);
        found = true;
        return;
    }

    if(sum + money[i] <= k){
        Try(i + 1, cnt + 1, sum + money[i]);
    } 

    Try(i + 1, cnt, sum);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    money.resize(n);
    for(auto &x : money) cin >> x;
    sort(money.rbegin(), money.rend());
    Try(0, 0, 0);
    cout << (found ? min_count : -1) << endl;
    return 0;
}