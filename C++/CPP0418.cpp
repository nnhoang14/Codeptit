//https://code.ptit.edu.vn/student/question/CPP0418
//HỢP VÀ GIAO CỦA HAI DÃY SỐ -1

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        map<int, int> res;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res[a[i]]++;
            }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            res[b[i]]++;
            }
        for(auto &entry : res)
            cout << entry.first << " ";
        cout << endl;
        for(auto &entry : res){
            if(entry.second > 1)cout << entry.first << " ";
        }
        cout << endl;
    }
    return 0;
}