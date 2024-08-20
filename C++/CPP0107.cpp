#include <bits/stdc++.h>
using namespace std;

int check(string s, string m){
    int count =0;
    for(int i = 0; i < m.length(); i++){
        if(s[i+4]!=m[i])count ++;
    }
    return count;
}

void solve(){
    double score,count ;
    string m1="A B B A D C C A B D C C A B D";
    string m2="A C C A B C D D B B C D D B B";
    string s;
    cin>>ws;
    getline(cin,s);
    if(s[2]=='1') count = check(s,m1);
    else count = check(s,m2);
    score = 10 - count*10/15;
    cout<<setprecision(2)<<fixed<<score<<endl;
}

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}