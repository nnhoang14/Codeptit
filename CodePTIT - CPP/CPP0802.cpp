//https://code.ptit.edu.vn/student/question/CPP0802
//TÍNH TỔNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s){
    int n = s.length();
    if(n > 10) return 0;
    for(auto &c : s){
        if(!isdigit(c)) return 0;
    }
    return 1;
}

int main(){
    ifstream input("DATA.in");
    string line;
    ll sum = 0;;
    while (getline(input,line)){
        stringstream ss(line);
        string word;
        while (ss >> word)
        {
            if(check(word)) sum += stoi(word);
        }
    }
    input.close();
    cout << sum;
    return 0;
}