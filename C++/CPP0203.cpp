#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,count=0,dem=0;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]<0)count ++;
            }
        sort(a.begin(),a.end());
        if(a[count]>1){
                cout<<"1"<<endl;
                dem++;
            }
        else for(int i = count; i < n; i++){
                if(a[i+1]-a[i]>1){
                cout<<a[i]+1<<endl;
                dem++;
                break;
                }
            }
        if(dem==0)cout<<a[n-1]+1<<endl;
    }  
    return 0;
}