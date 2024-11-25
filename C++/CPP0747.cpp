//https://code.ptit.edu.vn/student/question/CPP0747
//LOẠI BỎ 100

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
	int test;
    cin >> test;
    cin.ignore();
    while (test--){
        string s;
        cin >> s;
        int cnt = 0, pos;
        while ((pos = s.find("100")) != string::npos){
            s.erase(pos, 3);
            cnt += 3;
        }
        cout << cnt << endl;
    }
	return 0;
}