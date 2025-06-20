//https://code.ptit.edu.vn/student/question/CPP0108
//SỐ TĂNG GIẢM

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n < 2)return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)return 0;
    }
    return 1;
}

int increasing(int a){
    int lm = 10;
    while(a > 0){
        if(lm <= a % 10)return 0;
        lm = a % 10;
        a /= 10;
    }
    return 1;
}

int decreasing(int a){
    int lm = -1;
    while(a > 0){
        if(lm >= a % 10)return 0;
        lm = a % 10;
        a /= 10;
    }
    return 1;
}

int check(int num){
    if(increasing(num) || decreasing(num))return 1;
    return 0;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int num,count = 0;
        cin >> num;
        int st = pow(10,num - 1), en = pow(10,num);
        for(int i = st; i < en; i++){
            if(check(i)){
                if(isPrime(i))count++;
                }
        }
        cout << count << endl;
    }
    return 0;
}