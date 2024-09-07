//https://code.ptit.edu.vn/student/question/CPP0138
//CẶP SỐ NGUYÊN TỐ

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
        int num,count=0;
        cin>>num;
        for(int i = 2; i <= num/2; i++){
            if(is_prime(i)&&is_prime(num-i)){
                cout<<i<<" "<<num-i<<endl;
                count ++;
                break;
                }
        }
    }
    
    return 0;
}
