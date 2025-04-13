//https://code.ptit.edu.vn/student/question/DSA02007
//ĐỔI CHỖ CÁC CHỮ SỐ

#include<bits/stdc++.h>
using namespace std;

int k;
string s;

void Try(int i){
    if(k == 0 || i == s.length()){
        cout << s << endl;
        return;
    }
    int pos = i;
    for(int j = i + 1; j < s.length(); j ++){
        if(s[pos] <= s[j] && pos < j) pos = j;
    }
    if(s[i] != s[pos]){
        swap(s[i],s[pos]);
        k--;
    }    
    Try(i + 1);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> k >> s;
        Try(0);
    }
	return 0;
}