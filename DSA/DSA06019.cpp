//https://code.ptit.edu.vn/student/question/DSA06019
//SẮP XẾP THEO SỐ LẦN XUẤT HIỆN

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> &a, pair<int, int> &b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		map<int, int> tmp; 
		for(int i = 0; i < n; i++){
			int num;
			cin >> num;
			tmp[num]++;
		}
		vector<pair<int,int>> a(tmp.begin(), tmp.end());
		sort(a.begin(), a.end(), cmp);
		for(int i = 0; i < a.size(); i++){
			while(a[i].second > 0){
				cout << a[i].first << " ";
				a[i].second --;
			}
		}
		cout << endl;
	}
	return 0;
}