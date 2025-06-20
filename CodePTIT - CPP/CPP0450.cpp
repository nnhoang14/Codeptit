//https://code.ptit.edu.vn/student/question/CPP0450
//PHẦN TỬ ĐẦU TIÊN LẶP LẠI

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,duplicate = -1;
        cin>>n;
        vector<int> res(n);
        for(int i = 0; i < n; i++)
            cin>>res[i];
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(res[i] == res[j]){
                    duplicate = i;
                    break;
                }
            }
            if(duplicate > -1) break;
        }
        if(duplicate > -1) cout << res[duplicate] << endl;
        else cout << duplicate <<endl;
    }
    return 0;
}