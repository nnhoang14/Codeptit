//https://code.ptit.edu.vn/student/question/CPP0204
//ĐẾM SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        int l, r , count = 0;
        cin >> l >> r;
        for(int i = l; i <= r; i ++)
            if(isPrime(i))count ++;
        cout << count << endl;
    }
    return 0;
}