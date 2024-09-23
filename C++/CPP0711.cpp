//https://code.ptit.edu.vn/student/question/CPP0711
//LIỆT KÊ XÂU NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
    cin>>test;
    while (test--)
    {
        int num;
        cin >> num;
        vector<string> s;
        string word(num, '0');
        bool check = true;
        while (check){
            s.push_back(word);
            int i = num - 1;
            while(i >= 0 && word[i] == '1'){
                word[i] = '0';
                i--;
            }
            if(i >= 0 )word[i] = '1';
            else check = false;
        }
        for(int i = 0; i < s.size(); i++)cout << s[i] << " ";
        cout << endl;
    }
	return 0;
}