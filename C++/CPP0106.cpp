#include <bits/stdc++.h>
using namespace std;

void check(long long n){
    long long sm=0,tmp=n;
    while(n>0){
        sm=sm*10+n%10;
        n/=10;
    }
    if(sm==tmp)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        long long n;
        cin>>n;
        check(n);
    }
    return 0;
}