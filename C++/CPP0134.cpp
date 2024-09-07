//https://code.ptit.edu.vn/student/question/CPP0134
//ƯỚC SỐ NGUYÊN TỐ THỨ K

#include <bits/stdc++.h>
using namespace std;

int solve(int num, int k){
    int count=0;
    for(int i = 2; i <= sqrt(num); i++){
           while (num%i==0){
            count++;
            if(count==k)return i;
            num/=i;
           }
        }
        if(num>1&&count==k-1)return num;
        else return -1;
}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int num,k,res;
        cin>>num>>k;
        cout<<solve(num,k)<<endl;
    }
    return 0;
}
