//https://code.ptit.edu.vn/student/question/DSA02034
//TRÒ CHƠI VỚI CÁC CON SỐ

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> sol, vs;

void Try(int i){
    if(i == n){
        for(auto x : sol) cout << x;
        cout << endl;
        return;
    }   
    for(int j = 0; j < n; j++){
        if(!vs[j] && (sol.empty() || abs(sol.back() - (j + 1)) > 1)){
            sol.push_back(j + 1);
            vs[j] = 1;
            Try(i + 1);
            vs[j] = 0;
            sol.pop_back();
        }
    } 
}

int main(){
    int t; 
    cin >> t;
    while (t--){
        cin >> n;
        sol.clear();
        vs.assign(n, 0);
        Try(0);
        cout << endl;
    }
    return 0;
} 