//https://code.ptit.edu.vn/student/question/CPP0803
//SỐ KHÁC NHAU TRONG FILE

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ifstream input("DATA.in");
    int n;
    map<int, int> mp;
    while (input >> n){
        mp[n]++;
    }
    input.close();
    for(auto &entry : mp) cout << entry.first << " " << entry.second << endl;
    return 0;
}