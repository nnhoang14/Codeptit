#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int sum=0;
        for(const auto &entry : freq){
            if(entry.second > 1)sum+=entry.second;
        }
        cout<<sum<<endl;
    }
    return 0;
}