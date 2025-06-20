//https://code.ptit.edu.vn/student/question/CPP0130
//ƯỚC SỐ NGUYÊN TỐ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long num;
        cin >> num;
        for(long long i = 2; i <= sqrt(num); i++){
            while(num % i == 0){
                cout << i << " ";
                num /= i;
            }
        }
        if(num > 1)cout << num;
        cout << endl;
    }
    
    return 0;
}
