#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        long long num,max;
        cin>>num;
        for(long long i = 2; i <= sqrt(num); i++){
            while(num%i==0){
                max=i;
                num/=i;
            }
        }
        if(num>1)max=num;
        cout<<max<<endl;
    }
    
    return 0;
}