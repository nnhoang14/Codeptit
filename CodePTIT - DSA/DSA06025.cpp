//https://code.ptit.edu.vn/student/question/DSA06025
//SẮP XẾP CHÈN

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &a, int n){
	vector<int> res(n);
	for(int i = 0; i < n; i++){
		int pos = i, tmp = a[i];
		while (pos > 0 && res[pos - 1] > tmp){
			res[pos] = res[pos - 1];
			pos --;
		}
		res[pos] = tmp;
		cout << "Buoc " << i << ": ";
		for(int j = 0; j < i + 1; j++) cout << res[j] << " ";
		cout << endl;
	}
}

int main(){	
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	insertion_sort(a, n);
	return 0;
}
