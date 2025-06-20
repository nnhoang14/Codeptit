//https://code.ptit.edu.vn/student/question/CPP0335
//TÌM SỐ LỚN NHẤT TRONG XÂU

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s; 
        cin >> s;
        int tmp = 0;
        vector<int> res;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                int num = s[i] - '0';
                tmp = tmp*10 + num;
            }
            else{
                res.push_back(tmp);
                tmp = 0;
            }
        }
        if(tmp != 0 )res.push_back(tmp);
        sort(res.begin(),res.end());
        cout << res[res.size() - 1] << endl;
    }
    return 0;
