//https://code.ptit.edu.vn/student/question/CPP0416
//ĐẾM CẶP PHẦN TỬ CÓ TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,k,count = 0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i]+a[j]==k)count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}