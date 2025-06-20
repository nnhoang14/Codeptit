//https://code.ptit.edu.vn/student/question/CPP0325
//CHIA HẾT CHO 11

#include <bits/stdc++.h>
using namespace std;

void check(string s){
    long long sum_c=0,sum_l=0;
    for(int i = 0; i < s.length(); i++){
        int num = s[i] - '0';
        if(i%2==0)sum_c+=num;
        else sum_l+=num;
    }
    long long res = sum_l - sum_c;
    if(res%11==0) cout << "1" <<endl;
    else cout << "0" << endl;
}


int main() {
    int times;
    cin>>times;
    cin.ignore();
    while (times--)
    {
        string s;
        getline(cin,s);
        check(s);
    }
    return 0;
}