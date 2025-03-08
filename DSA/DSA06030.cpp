//https://code.ptit.edu.vn/student/question/DSA06030
//SẮP XẾP NỔI BỌT - LIỆT KÊ NGƯỢC

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubble_sort(vector<int> a, int n){
	vector<string> steps;
	for(int i = 0; i < n - 1; i++){
		bool check = false;
		for(int j = 0; j < n - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				check = true;
			}
		}
		if(!check) break;
		string step = "Buoc " + to_string(i + 1) + ": ";
		for(int j = 0; j < n; j++)
			step += to_string(a[j]) + " ";
		steps.push_back(step);
	}
	for(int i = steps.size() - 1; i >= 0; i--)
		cout << steps[i] << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &x : a) cin >> x;
		bubble_sort(a, n);
	}
	return 0;
}