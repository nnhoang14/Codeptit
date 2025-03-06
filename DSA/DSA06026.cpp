//https://code.ptit.edu.vn/student/question/DSA06026
//SẮP XẾP NỔI BỌT

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &a, int n){
	vector<int> res(n);
	for(int i = 0; i < n - 1; i++){
		bool check = false;
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				check = true;
			}
		}
		if(!check) break;
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << endl;
	}
}

int main(){	
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	bubble_sort(a, n);
	return 0;
}
