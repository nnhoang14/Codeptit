//https://code.ptit.edu.vn/student/question/CPP0152
//CHIA DƯ

#include <bits/stdc++.h>
using namespace std;

void solve(int num,int m){
    for(int i = 0; i < m; i++){
        if((num*i)%m==1){
            cout<<i<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int num,m;
        cin>>num>>m;
        solve(num,m);
    }  
    return 0;
}
