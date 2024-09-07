//https://code.ptit.edu.vn/student/question/CPP0105
//SỐ LỘC PHÁT

#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int l;
    while(n>0){
        l=n%10;
        if(l!=0&&l!=6&&l!=8)return 0;
        n/=10;
    }
    return 1;
}

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        if(check(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
