//https://code.ptit.edu.vn/student/question/CPP0109
//CÂN BẰNG CHẴN LẺ

#include <bits/stdc++.h>
using namespace std;

int check_cl(int n){
    int c=0,l=0,a;
    while(n>0){
        a=n%10;
        if(a%2==0)c++;
        else l++;
        n/=10;
    }
    if(c==l)return 1;
    else return 0;
}

int main() 
{
    int n,count=0;
    cin>>n;
    for(int i = pow(10,n-1); i < pow(10,n); i++){
        if(check_cl(i)){
            cout<<i<<" ";
            count++;
            }
        if(count == 10){
            cout<<"\n";
            count = 0;
            }
    }
    return 0;
}
