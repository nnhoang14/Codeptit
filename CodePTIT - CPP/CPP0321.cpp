//https://code.ptit.edu.vn/student/question/CPP0321
//HIỆU HAI SỐ NGUYÊN LỚN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string minustring(string x, string y){
    int rem = 0;
    string res = "";
    for(int i = x.length() - 1; i >= 0; i--){
        int n1 = x[i] - '0', n2 = y[i] - '0';
        int tmp = n1 - n2 - rem;
        if(tmp < 0){
            tmp += 10;
            rem = 1;
        }
        else rem = 0;
        res = char(tmp + '0') + res;
    }
    return res;
}

int main(){
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        string x,y;
        cin >> x >> y;
        int len = max(x.length() , y.length());
        while (x.length() < len) {
            x = '0' + x;
        }
        while (y.length() < len) {
            y = '0' + y;
        }
        if(x< y)
            swap(x,y);
        string res = minustring(x,y);
        cout << res << endl;
    }
    return 0;
}