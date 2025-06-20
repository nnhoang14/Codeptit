//https://code.ptit.edu.vn/student/question/CPP0211
//KHOẢNG CÁCH XA NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x; 
        int kc = 0;
        for(int i = 0; i < n; i ++){
            for(int j = n - 1; j > i; j --){
                if(a[i] <= a[j]){
                    kc = max(kc, (j - i));
                    break;
                }
            }
        }
        cout << kc << endl;
    }
	return 0;
}