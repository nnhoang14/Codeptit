#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        long long num,k,sum=0;
        cin>>num>>k;
        for(int i = 1; i <= num; i++){
            sum+=i%k;
        }
        cout<<sum<<endl;
    }  
    return 0;
}