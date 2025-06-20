//https://code.ptit.edu.vn/student/question/CPP0119
//ƯỚC SỐ CHIA HẾT CHO 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n,count = 0;
        cin >> n;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0)count ++;
                if(i != (n /i) && (n/i)%2==0)count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}