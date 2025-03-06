//https://code.ptit.edu.vn/student/question/DSA06021
//TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x) cout << i + 1 << endl; 
		}
	}
	return 0;
}