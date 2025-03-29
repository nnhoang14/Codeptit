//https://code.ptit.edu.vn/student/question/DSA02031
//GHÉP CHỮ CÁI

#include<bits/stdc++.h>
using namespace std;

char s;
vector<char> tmp;
vector<bool> used;
set<char> vowels = {'A', 'E'};

bool check(vector<char> &tmp){
    for(int i = 1; i < tmp.size() - 1; i++){
        if(vowels.count(tmp[i]) && !vowels.count(tmp[i - 1]) 
        && !vowels.count(tmp[i + 1])) return false;
    }
    return true;
}

void Try(int i){
    for(char j = 'A'; j <= s; j++){
        if(!used[j - 'A']){
            tmp[i] = j;
            used[j - 'A'] = true;
            if(i == (s - 'A')){
                if(check(tmp)){
                    for(auto x : tmp) cout << x;
                    cout << endl;
                }
            }
            else Try(i + 1);
            used[j - 'A'] = false;
        }
    }
}

int main(){
    cin >> s;
    int n = s - 'A' + 1;
    tmp.resize(n);
    used.resize(n, false);
    Try(0);
    return 0;
} 