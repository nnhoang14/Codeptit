//https://code.ptit.edu.vn/student/question/CPP0317
//SỐ ĐẸP

#include <bits/stdc++.h>
using namespace std;

int check_tn(string s){
    int l=0,r=s.length()-1;
    while(r>=l){
        if(s[l]!=s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

int check_csc(string s){
    for(auto c : s){
        int x = c -'0';
        if(x%2!=0)return 0;
    }
    return 1;
}

int main() {
    int times;
    cin>>times;
    cin.ignore();
    while (times--)
    {
        string s; 
        getline(cin,s);
        if (check_csc(s) && check_tn(s)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}