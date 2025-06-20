//https://code.ptit.edu.vn/student/question/CPP0207
//QUAY VÒNG DÃY SỐ 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,pt;
        cin>>n>>pt;
        int a[n];
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++){
            if(i<(n-pt))cout<<a[i+pt]<<" ";
            else cout<<a[i-(n-pt)]<<" ";;
            }
        cout<<endl;
    }  
    return 0;
}
