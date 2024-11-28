//https://code.ptit.edu.vn/student/question/CPP0129
//THỐNG KÊ PHẦN TỬ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int test;
    cin >> test;
    while (test--){
        int n, p, x = 0;
        cin >> n >> p;
        for(int i = p; i <= n; i += p){
            int tmp = i;
            while (tmp % p == 0){
                x ++;
                tmp /= p;
            }
        }
        cout << x << endl;
    }
	return 0;
}