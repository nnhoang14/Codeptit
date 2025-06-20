//https://code.ptit.edu.vn/student/question/DSA06031
//PHẦN TỬ LỚN NHẤT TRONG DÃY CON

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void testcase(){
	int n, k;
	cin >> n >> k;
	deque<int> dq;
	vector<ll> a(n);
	for(auto &x : a) cin >> x;
	for(int i = 0; i < k; i++){
		while(!dq.empty() && a[dq.back()] <= a[i]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	cout << a[dq.front()] << " ";
	for(int i = k; i < n; i++){
		while(!dq.empty() && dq.front() <= i - k){
			dq.pop_front();
		}

		while(!dq.empty() && a[dq.back()] <= a[i]){
			dq.pop_back();
		}
		dq.push_back(i);
		cout << a[dq.front()] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		testcase();
	}
	return 0;
}