//https://code.ptit.edu.vn/student/question/DSA05009
//TẬP CON BẰNG NHAU

#include<bits/stdc++.h>
using namespace std;

int n, sum, ok;
vector<int> res;

void Try(int i, int com){
    if (ok) return;
    if(com == sum - com){
        ok = 1;
        return;
    }
    if(com * 2 > sum) return;
    for(int j = i; j < n; j++)
        if(com + res[j] <= sum - com - res[j])
            Try(i + 1, com + res[j]);
}
int check(){
    if (sum % 2 != 0) return 0;
    sort(res.rbegin(), res.rend());
    ok = 0;
    Try(0, 0);
    return ok;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        sum = 0;
        cin >> n;
        res.resize(n);
        for(auto &x : res){
            cin >> x;
            sum += x;
        }
        if(check()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}