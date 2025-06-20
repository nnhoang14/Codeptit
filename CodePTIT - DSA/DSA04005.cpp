//https://code.ptit.edu.vn/student/question/DSA04005
//DÃY XÂU FIBONACCI

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll len[93];

void setup(){
    len[1] = len[2] = 1;
    for(int i = 3; i < 93; i++)
        len[i] = len[i - 1] + len[i - 2];
}

char findChar(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= len[n - 2]) return findChar(n - 2, k);
    else return findChar(n - 1, k - len[n - 2]);
}

int main(){
    int t;
    cin >> t;
    setup();
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << findChar(n, k) << endl;
    }
    return 0;
}