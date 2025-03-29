//https://code.ptit.edu.vn/student/question/DSA02001
//DÃY SỐ 1

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> tmp;

void Try(int i, int end, vector<int> &res){
    for(int j = 0; j < res.size(); j++){
        tmp[i] = res[j];
        if(i == end - 1){
            cout << "[";
            for(int m = 0 ; m < i; m++){
                if(m == i) cout << tmp[m] << "]" << endl;
                else cout << tmp[m] << " ";
            }
        }
        else Try(i + 1, end - 1, res);
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        Try(0, n, a);
    }
    return 0;
} 