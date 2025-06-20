//https://code.ptit.edu.vn/student/question/CPP0327
//CHIA HẾT CHO 5

#include <bits/stdc++.h>
using namespace std;

void check(string s){
    long long sum=0;
    for(int i = 0; i < s.length(); i++){
        int num = s[i] - '0';
        sum = (sum * 2 + num) % 5;
    }
    if(sum == 0) cout << "Yes" <<endl;
    else cout << "No" <<endl;
}


int main() {
    int times;
    cin>>times;
    while (times--)
    {
        string s;
        cin>>s;
        check(s);
    }
    return 0;
}