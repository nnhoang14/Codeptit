//https://code.ptit.edu.vn/student/question/DSA06029
//SẮP XẾP CHÈN - LIỆT KÊ NGƯỢC

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void insertion_sort(vector<int> a, int n){
	vector<string> steps;
	for(int i = 0; i < n; i++){
		int pos = i - 1, tmp = a[i];
		while (pos >= 0 && a[pos]> tmp){
			a[pos + 1] = a[pos];
			pos --;
		}
		a[pos + 1] = tmp;
		string step = "Buoc " + to_string(i) + ": ";
		for(int j = 0; j <= i; j++)
			step += to_string(a[j]) + " ";
		steps.push_back(step);
	}
	for(int i = steps.size() - 1; i >= 0; i--)
		cout << steps[i] << endl;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	insertion_sort(a, n);
	return 0;
}