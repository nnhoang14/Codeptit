//https://code.ptit.edu.vn/student/question/CPP0118
//SỐ SPHENIC

#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            int t = 0;
            count ++;
            while(n % i == 0){
                t++;
                n /= i;
            }
            if(t > 1) return 0;
        }
        if(n == 1)break;
    }
    if(count != 3)return 0;
    return 1;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if(check(n))cout << "1" << endl;
        else cout << "0" << endl;  
    }
    return 0;
}