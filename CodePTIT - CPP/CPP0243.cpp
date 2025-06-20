//https://code.ptit.edu.vn/student/question/CPP0243
//SẮP ĐẶT HAI DÃY SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int test;
    cin >> test;
    while (test--){
        int n, m; 
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        map<int, int> mp;
        for(auto &x : a) {
            cin >> x;
            mp[x] ++;
        }
        for(auto &x : b) {
            cin >> x;
            while (mp[x] > 0){
                cout << x << " ";
                mp[x] --;
            }
        }
        for(auto entry : mp){
            while (entry.second > 0){
                cout << entry.first << " ";
                entry.second --;
            }
        }
        cout << endl;
    }
	return 0;
}