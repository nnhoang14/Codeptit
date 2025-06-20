//https://code.ptit.edu.vn/student/question/CPP0316
//SỐ MAY MẮN - 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s){
    if(s.size() == 1 && s != "9")return 0;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        int num = s[i] - '0';
        sum += num;
    }
    string res = to_string(sum);
    if(sum == 9 || check(res))return 1;
    return 0;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin>>s;
        cout << check(s) << endl;
    }
    return 0;
}