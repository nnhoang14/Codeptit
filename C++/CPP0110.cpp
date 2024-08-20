#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    while (test--)
    {
        int pt=-1;
        string s;
        cin>>ws;
        getline(cin,s);
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
                pt=i;
                break;
            }
        }
        if(pt==-1)cout<<s;
        else {
            for(int i = 0; i < pt; i++){
                cout<<s[i];
            }
            for(int i = pt+3; i < s.length(); i++){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}