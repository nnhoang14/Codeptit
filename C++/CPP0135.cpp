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
        int num;
        cin>>num;
        for(int i = 2; i <= sqrt(num); i++){
            if(is_prime(i))cout<<i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}