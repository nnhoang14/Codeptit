//https://code.ptit.edu.vn/student/question/CPP0123
//KIỂM TRA NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

int is_prime(int num){
    if(num<2)return 0;
    for(int i = 2; i <= sqrt(num); i ++){
        if(num%i==0)return 0;
    }
    return 1;
}

int main() 
{
    int num;
    cin>>num;
    if(is_prime(num))cout<<"YES";
    else cout<<"NO";
}
