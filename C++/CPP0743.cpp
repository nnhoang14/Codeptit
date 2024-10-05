//https://code.ptit.edu.vn/student/question/CPP0743
//ĐẢO TỪ

#include <bits/stdc++.h>
using namespace std;

void dao_tu(string s){
    stringstream ss(s);
    string word;
    vector<string> nw;
    while(ss >> word){
        nw.push_back(word);
    }
    for(int i = nw.size() - 1; i >= 0; i--){
        cout<< nw[i];
        if(i > 0)cout << " ";
    }
    cout << endl;
}

int main() {
	int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin, s);
        dao_tu(s);
    }
	return 0;
}