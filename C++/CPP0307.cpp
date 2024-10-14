//https://code.ptit.edu.vn/student/question/CPP0307
//HIỆU CỦA HAI TẬP TỪ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

set<string> convert(string s){
    set<string> tmp;
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        tmp.insert(word);
    }
    return tmp;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        vector<string> tmp;
        set<string> cons1 = convert(s1);
        set<string> cons2 = convert(s2);
        for(auto x : cons1){
            int count = 0;
            for(auto y : cons2){
                if(x == y)count ++;
            }
            if(count == 0) cout << x <<" ";
        }
        cout << endl;
    }
    return 0;
}