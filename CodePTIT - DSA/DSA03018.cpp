//https://code.ptit.edu.vn/student/question/DSA03018
//SỐ MAY MẮN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int sv = 0, fo = 0;
        for(int i = n/7; i >= 1; i--){
            int tmp = n - i * 7;
            if(tmp % 4 == 0 || tmp == 0){
                sv = i;
                fo = tmp / 4;
                break;
            }
        }
        if(!fo && !sv){
            cout << "-1" << endl;
            continue;
        }
        string s = "";
        for(int i = 0; i < fo; i++)
            s += '4';
        for(int i = 0; i < sv; i++)
            s += '7';
        cout << s << endl;
    }
    return 0;
}