//https://code.ptit.edu.vn/student/question/DSA02023
//ĐẶT TÊN

#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<string> res;
void Try(int i, int st, vector<string> &name){
    for(int j = st; j < name.size(); j++){
        res[i] = name[j];
        if(i == k - 1){
            for(auto x : res) cout << x << " ";
            cout << endl;
        }
        else Try(i + 1, j + 1, name);
    }
}

int main(){
    cin >> n >> k;
    set<string> tmp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        tmp.insert(s);
    }
    vector<string> name(tmp.begin(),tmp.end());
    res.resize(k);
    Try(0, 0, name);
    return 0;
}