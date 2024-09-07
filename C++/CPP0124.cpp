//https://code.ptit.edu.vn/student/question/CPP0124
//PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - 2

#include <bits/stdc++.h>
using namespace std;

int is_prime(int num){
    if(num<2)return 0;
    for(int i = 2; i <= sqrt(num); i ++){
        if(num%i==0)return 0;
    }
    return 1;
}

int main() 
{
    int num;
    cin>>num;
    for(int i = 2; i <= num; i++){
        int count=0;
        while (num>0)
        {
            if(num%i==0&&is_prime(i)){
                count ++;
                num/=i;
            }
            else break;
        }
        if(count>0)cout<<i<<" "<<count<<endl;
    }
    return 0;
}
