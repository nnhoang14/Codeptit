//https://code.ptit.edu.vn/student/question/CPP0142
//NGUYÊN TỐ CÙNG NHAU

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n < 2)return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n,count = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
            if(__gcd(i,n) == 1)count ++;
        if(isPrime(count))cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}