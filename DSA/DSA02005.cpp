//https://code.ptit.edu.vn/student/question/DSA02005
//HOÁN VỊ XÂU KÝ TỰ

#include<bits/stdc++.h>
using namespace std;

string s;
vector<char> tmp;
vector<bool> used;

void Try(int i){
    for(char j = 0; j < s.size(); j++){
        if(!used[j ]){
            tmp[i] = s[j];
            used[j] = true;
            if(i == s.size() - 1){
                for(auto x : tmp) cout << x;
                cout << " ";
            }
            else Try(i + 1);
            used[j] = false;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int n = s.size();
        tmp.resize(n);
        used.resize(n, false);
        Try(0);
        cout << endl;
    }
    return 0;
} 