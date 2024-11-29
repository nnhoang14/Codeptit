//https://code.ptit.edu.vn/student/question/CPP0313
//LOẠI BỎ TỪ TRONG XÂU

#include <bits/stdc++.h>
using namespace std;

void remove_word(string s, string word){
    stringstream ss(s);
    string sam;
    while (ss>>sam)
    {
        if(sam!=word)cout<<sam<<" ";
    }
}

int main() {
    string s;
    getline(cin,s);
    string word;
    cin>>word;
    remove_word(s,word);
    return 0;
}
