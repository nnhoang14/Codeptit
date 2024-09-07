//https://code.ptit.edu.vn/student/question/CPP0103
//TÍNH TỔNG PHÂN THỨC - 1

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    double sum=0;
    cin>>n;
    for(int i = 1; i <= n; i++)
        sum+=(double)1/i;
    cout<< setprecision(4)<<fixed<<sum;
    return 0;
}
