//https://code.ptit.edu.vn/student/question/CPP0334
//TÍNH TỔNG CÁC SỐ TRONG XÂU

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
        ll sum = 0;
        for(auto x : res) sum += x;
        cout << sum << endl;
    }
    return 0;
}