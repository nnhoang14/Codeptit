#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long LCM(int a, int b){
    return (long long)a * (b / GCD(a, b));
}

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int a,b;
        cin>>a>>b;
        cout<<LCM(a,b)<<" "<<GCD(a,b)<<endl;
    }
    return 0;
}