//https://code.ptit.edu.vn/student/question/CPP0122
//ƯỚC SỐ CHUNG LỚN NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN

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
    int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin>>num;
        int a[num];
        fill(a,a+num,1);
        long long res=1;
        for(int i = 0; i < num; i++){
            if(is_prime(i+1)){
                for(int j=i+1; j <= num; j*=(i+1))
                    a[j-1]=i+1;
            }
        }
        for(int i = 0; i < num; i++)
            res*=a[i];
        cout<<res<<endl;
    }
    return 0;
}
