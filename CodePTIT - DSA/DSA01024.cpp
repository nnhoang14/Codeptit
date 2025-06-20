//https://code.ptit.edu.vn/student/question/DSA01024
//ĐẶT TÊN - 1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<string> tmp;

void Try(int i, int st ,vector<string> &res){
    for(int j = st; j < res.size(); j++){
        tmp[i] = res[j];
        if(i == k - 1){
            for(auto x : tmp) cout << x << " ";
            cout << endl;
        }
        else Try(i + 1, j + 1, res);
    }
}

int main(){
    cin >> n >> k;
    set<string> name;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        name.insert(s);
    }
    vector<string> res(name.begin(), name.end());
    tmp.resize(k);
    Try(0, 0, res);
    return 0;
} 