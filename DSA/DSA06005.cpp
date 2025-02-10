//https://code.ptit.edu.vn/student/question/DSA06005
//HỢP VÀ GIAO CỦA HAI DÃY SỐ 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        map<int,int> freq;
        for(auto &x : a){
            cin >> x;
            freq[x]++;
        } 
        for(auto &x : b){
            cin >> x;
            freq[x]++;
        }
        for(auto entry : freq)
            cout << entry.first << " ";
        cout << endl;
        for(auto entry : freq){
            if(entry.second > 1) cout << entry.first << " ";
        }
        cout << endl;
    }
    return 0;
}