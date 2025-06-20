//https://code.ptit.edu.vn/student/question/CPP0214
//SỐ LỚN NHẤT CỦA DÃY CON LIÊN TỤC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int test;
    cin >> test;
    while (test--){
        int n, k; 
        cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        deque<int> dq;
        for(int i = 0; i < k; i++){
            while (!dq.empty() && a[i] > a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        cout << a[dq.front()] << " ";
        for(int i = k; i < n; i++){
            if(dq.front() <= i - k ) dq.pop_front();
            while (!dq.empty() && a[i] > a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
	return 0;
}