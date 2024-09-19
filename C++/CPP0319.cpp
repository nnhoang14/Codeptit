//https://code.ptit.edu.vn/student/question/CPP0319
//NHỎ NHẤT - LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

void solve(int m, int s){
    if((s == 0 && m > 1) || s > m * 9){
        cout << "-1 -1"; 
        return;
    }

    int tmp = s, count = 0;

    vector <int> lag;
    for(int i = 0; i < m; i++){
        if(tmp >= 9) {
            lag.push_back(9);
            tmp -= 9;
        } else {
            lag.push_back(tmp);
            tmp = 0;
        }
    }

    vector <int> sma;
    for(int i = m - 1; i >= 0; i--)
        sma.push_back(lag[i]);

    if(sma[0] == 0 ){
        sma[0] = 1;
        for(int i = 1; i < m; i++){
            if(sma[i] > 0){
                sma[i]--;
                break;
            }
        }
    }

    for(int i = 0; i < m; i++)cout << sma[i];
    cout << " ";
    for(int i = 0; i < m; i++) cout << lag[i];
}

int main() {
	int m, s;
    cin >> m >> s;
    solve(m,s);
	return 0;
}