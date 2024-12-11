//https://code.ptit.edu.vn/student/question/CPP0242
//DÃY SỐ NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        int lm = 1;
        for(int i = 0; i < n; i++){
            int s1 = 0, s2 = 0; 
            for(int j = i; j < n; j++){
                s1 += a[j];
                s2 += b[j];
                if(s1 == s2) lm = max(lm, j - i + 1);
            }
        }
        cout << lm << endl;
    }
	return 0;
}