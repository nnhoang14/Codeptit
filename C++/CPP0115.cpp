//https://code.ptit.edu.vn/student/question/CPP0115
//PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - 1

#include <bits/stdc++.h>
using namespace std;

int is_prime(int num){
    if(num<2)return 0;
    for(int i = 2; i < sqrt(i); i++){
        if(num%i==0)return 0;
    }
    return 1;
}
int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int num,tmp;
        cin>>num;
        tmp=num;
        for(int i=2; i<= num; i++){
            int count = 0;
            while (tmp>1){
                if(tmp % i == 0 &&is_prime(i)){
                count++;
                tmp/=i;
                }
                else break;
            }
            if(count>0)cout<<i<<" "<<count<<" ";
            if(tmp==1)break;
        }
        cout<<"\n";
    }
    return 0;
}
