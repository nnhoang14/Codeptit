//https://code.ptit.edu.vn/student/question/DSA06024
//SẮP XẾP CHỌN

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void selection_sort(vector<int> a, int n){
	for(int i = 0; i < n - 1; i++){
		int pos = i;
		for(int j = i + 1; j < n; j++){
			if(a[pos] > a[j]) pos = j;
		}
			swap(a[i],a[pos]);
		cout << "Buoc " << i + 1 << ": ";
		for(auto x : a) cout << x << " ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	selection_sort(a,n);
	return 0;
}