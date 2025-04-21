//https://code.ptit.edu.vn/student/question/DSA03015
//MUA LƯƠNG THỰC

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n, s, m;
        cin >> n >> s >> m;
        int nd = s * m;
        int d_max = s - s / 7;
        if(d_max * n < nd) cout << "-1" << endl;
        else{
            int d_min = (nd + n - 1) / n;
            cout << d_min << endl;
        }
    }
    return 0;
}