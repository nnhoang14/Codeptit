//https://code.ptit.edu.vn/student/question/CPP0104\
//TÍNH TỔNG GIAI THỪA

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long sum=1,tmp=1;
    cin>>n;
    for(int i = 2; i <= n; i++){
        tmp=tmp*i;
        sum+=tmp;
    }
    cout<<sum;
    return 0;
}
