//https://code.ptit.edu.vn/student/question/CPP0120
//CHIA HẾT CHO A VÀ B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int m,n,a,b,count = 0;
        cin >> m >> n >> a >> b;
        for(int i = m; i <= n; i++){
            if(i % a == 0 || i % b ==0) count ++;
        }
        cout << count << endl;
    }
    return 0;
}