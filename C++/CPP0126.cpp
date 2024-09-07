//https://code.ptit.edu.vn/student/question/CPP0126
//LIỆT KÊ SỐ NGUYÊN TỐ - 2

#include <bits/stdc++.h>
using namespace std;

int is_prime(int n){
    if(n<2)return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)return 0;
    }
    return 1;
}
int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int a,b,tmp;
        cin>>a>>b;
        tmp=a;
        if(a>=b){
            a=b;
            b=tmp;
        }
        for(int i = a; i <= b; i++){
            if(is_prime(i))cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
