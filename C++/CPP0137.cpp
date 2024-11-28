//https://code.ptit.edu.vn/student/question/CPP0137
//LIỆT KÊ SỐ CÓ BA ƯỚC SỐ TRONG KHOẢNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
	int test;
    cin >> test;
    while (test--){
        ll l, r;
        cin >> l >> r;
        int st = sqrt(l), en = sqrt(r), cnt = 0;
        for(int i = st; i <= en; i++){
            if(isPrime(i)) cnt ++;
        }
        cout << cnt << endl;
    }
	return 0;
}