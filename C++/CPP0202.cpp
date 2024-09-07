//https://code.ptit.edu.vn/student/question/CPP0202
//KHOẢNG CÁCH NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        sort(a.begin(),a.end());
        int min=a[1]-a[0];
        for(int i = 1; i < n-1; i++){
            if(a[i+1]-a[i]<min)min=a[i+1]-a[i];
        }
        cout<<min<<endl;
    }  
    return 0;
}
