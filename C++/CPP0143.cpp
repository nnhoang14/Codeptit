#include <bits/stdc++.h>
using namespace std;

void fibo(int num){
    long long f1=1,f2=1,f3,count=3;
    if(num<3)cout<<f2<<endl;
    else {
        while (count<=num)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            count++;
        }
        cout<<f3<<endl;
        }
}


int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin>>num;
        fibo(num);
    }  
    return 0;
}