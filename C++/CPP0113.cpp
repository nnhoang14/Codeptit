#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin>>num;
        if((num-86)%100==0)cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}