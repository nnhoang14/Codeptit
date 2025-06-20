//https://code.ptit.edu.vn/student/question/CPP0741
//TÍNH LŨY THỪA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        ll x, y, p, res = 1;
        cin >> x >> y >> p;
        x %= p;
        while (y > 0)
        {
            if(y % 2 == 1)res = (res * x) % p;
            y /= 2;
            x = (x * x) % p;
        }
        cout << res << endl;
    }
	return 0;
}
