//https://code.ptit.edu.vn/student/question/CPP0723
//TÍNH GIAI THỪA CÁC CHỮ SỐ

#include <bits/stdc++.h>
using namespace std;

string thaythe(char a){
    if (a=='0' || a=='1') return "1"; 
    else if (a=='2') return "2"; 
    else if (a=='3') return "3";
    else if (a=='4') return "322"; 
    else if (a=='5') return "5"; 
    else if (a=='6') return "53"; 
    else if (a=='7') return "7"; 
    else if (a=='8') return "7222"; 
    else if (a=='9') return "7332";
}

int main() {
	int test;
    cin>>test;
    while (test--)
    {
        int n;
        string a,tmp="";
        cin >> n >> a;
        for(auto x : a){
            tmp += thaythe(x);
        }
        sort(tmp.begin(),tmp.end(),greater<char>());
        while(tmp[tmp.length()-1] == '1'){
            tmp.erase(tmp.end()-1);
            }
        cout << tmp << endl;
    }
	return 0;
}