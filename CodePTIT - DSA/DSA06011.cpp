//https://code.ptit.edu.vn/student/question/DSA06011
//TỔNG GẦN 0 NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, sm = 1e6;
		cin >> n;
		vector<int> a(n);
		for(auto &x : a) cin >> x;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				int sum = a[i] + a[j];
				if(abs(sum) < abs(sm)) sm = sum;
			}	
		}
		cout << sm << endl;
	}
	return 0;
}