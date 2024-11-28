//https://code.ptit.edu.vn/student/question/NNLTC_001
//THỐNG KÊ PHẦN TỬ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/* bool cmp(pair<int,int> a, pair <int,int> b){
    return a.second > b.second;
} */

int main() {
	int n;
    unordered_map<int, int> mp;
    while (cin >> n){
        mp[n]++;
    }
    /* for(auto &entry : mp) 
        cout << entry.first << " " << entry.second << endl;
 */
    vector<pair<int, int>> ds(mp.begin(), mp.end());
    //sort(ds.begin(),ds.end(),cmp);
    for(int i = ds.size() - 1; i >= 0; i--) 
        cout << ds[i].first << " " << ds[i].second << endl;
	return 0;
}