//https://code.ptit.edu.vn/student/question/DSA08005
//SỐ NHỊ PHÂN TỪ 1 ĐẾN N

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        deque<ll> q;
        q.push_back(1);
        while(n--){
            ll x = q.front();
            q.pop_front();
            cout << x << " ";
            q.push_back(x * 10);
            q.push_back(x * 10 + 1);
        }
        cout << endl;
    }
    return 0;
}