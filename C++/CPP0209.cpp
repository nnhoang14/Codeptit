//https://code.ptit.edu.vn/student/question/CPP0209
//TÍNH TỔNG TRONG KHOẢNG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i = 0; i < n; i++)cin>>a[i];
        while (q--)
        {
            int l,r,sum=0;
            cin>>l>>r;
            for(int i = l-1; i < r; i++){
                sum+=a[i];
            }
            cout<<sum<<endl;
        }
    }  
    return 0;
}
