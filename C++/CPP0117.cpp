#include <bits/stdc++.h>
using namespace std;

int cal_sum(int num){
    int sum=0;
    while (num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int num,res;
        cin>>num;
        res=num;
        while (res>=10)
        {
            res=cal_sum(res);
        }
        cout<<res<<endl;
    }
    return 0;
}