//http://code.ptit.edu.vn/student/question/DSA06022
//SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		set<int> cp;
		for(int i = 0; i < n; i++){
			int x; 
			cin >> x;
			cp.insert(x);
		}
		if(cp.size() < 2) cout << "-1" << endl;
		else{
			vector<int> res(cp.begin(), cp.end());
			cout << res[0] << " " << res[1] << endl;
		}
	}
	return 0;
}