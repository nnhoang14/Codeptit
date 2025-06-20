//https://code.ptit.edu.vn/student/question/CPP0111
//SỐ LIỀN KỀ

#include <bits/stdc++.h>
using namespace std;

int check(string s){
    for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]!=1 && s[i]-s[i-1]!=-1)return 0;
        }
    return 1;
}

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        string s;
        cin>>ws;
        getline(cin,s);
        if(check(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
