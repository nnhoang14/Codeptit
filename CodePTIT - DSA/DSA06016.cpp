//https://code.ptit.edu.vn/student/question/DSA06016
//TÍCH LỚN NHẤT - NHỎ NHẤT

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while (t--){
		ll n, m, max = -1e8, min = 1e8;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max) max = a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] < min) min = b[i];
		}
		cout << max * min << endl;
	}
	return 0;
}