//https://code.ptit.edu.vn/student/question/DSA01011
//HOÁN VỊ TIẾP THEO CỦA CHUỖI SỐ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int stt;
        cin >> stt;
        string s;
        cin >> s;
        int n = s.length(), pos = n - 2;
        while (pos >= 0 && s[pos] >= s[pos + 1] ){
            pos--;
        }
        cout << stt << " ";
        if(pos < 0){
            cout << "BIGGEST" << endl;
        } else {
            int i = n - 1;
            while (s[i] <= s[pos]){ 
                i --;
            }
            swap(s[pos], s[i]);
            reverse(s.begin() + pos + 1, s.end());
            for(auto num : s) cout << num;
            cout << endl;
        }
    }
    return 0;
}