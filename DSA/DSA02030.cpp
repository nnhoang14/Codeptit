//https://code.ptit.edu.vn/student/question/DSA02030
//LIỆT KÊ XÂU KÝ TỰ

#include<bits/stdc++.h>
using namespace std;

char c;
int k;
vector<char> res;

void Try(int i, char st){
    for(char j = st; j <= c; j++){
        res[i] = j;
        if(i == k - 1){
            for(auto x : res) cout << x;
            cout << endl;
        }
        else Try(i + 1, j);
    }
}

int main(){
    cin >> c >> k;
    res.resize(k);
    Try(0, 'A');
    return 0;
}