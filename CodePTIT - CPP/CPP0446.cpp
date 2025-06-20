//https://code.ptit.edu.vn/student/question/CPP0446
//TỔNG GẦN 0 NHẤT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> res(n);
        for(int i = 0; i < n; i++)
            cin>>res[i];
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int sum = res[i] + res [j];
                if(abs(sum) < abs(min))min = sum;
            }
        }
        cout << min << endl;
    }
    return 0;
}