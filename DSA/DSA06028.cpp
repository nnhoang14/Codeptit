//https://code.ptit.edu.vn/student/question/DSA06028
//SẮP XẾP CHỌN - LIỆT KÊ NGƯỢC

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void selection_sort(vector<int> a, int n){
	vector<string> res;
	for(int i = 0; i < n - 1; i++){
		int pos = i;
		string s = "";
		for(int j = i + 1; j < n; j++){
			if(a[pos] > a[j]) pos = j;
		}
		swap(a[i],a[pos]);
		s += "Buoc " + to_string(i + 1) + ": ";
		for(auto x : a) s += to_string(x) + " ";
		res.push_back(s);
	}
	for(int i = res.size() - 1; i >= 0; i--)
		cout << res[i] << endl;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	selection_sort(a,n);
	return 0;
}