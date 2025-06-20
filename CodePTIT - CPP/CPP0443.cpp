//https://code.ptit.edu.vn/student/question/CPP0443
//SỐ NHỎ NHẤT CÒN THIẾU

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        cin.ignore();
        vector<int> res(n,0);
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        while (ss>>word)
        {
            res[stoi(word) - 1]++;
        }
        for(int i = 0; i < n; i++){
            if(res[i] == 0){
                cout<< i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}