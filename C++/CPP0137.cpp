//https://code.ptit.edu.vn/student/question/CPP0139
//SỐ SMITH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}

int sum(int n){
    int res = 0;
    while (n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool check(int n){
    if(isPrime(n)) return false;
    int res = 0, tmp = sum(n);
    for(int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
                res += sum(i);
                n /= i;
        }
    }
    if(n > 1) res += sum(n);
    return res == tmp;
}

int main() {
	int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        if(check(n))cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
	return 0;
}