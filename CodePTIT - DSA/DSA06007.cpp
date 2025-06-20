//https://code.ptit.edu.vn/student/question/DSA06007
//SẮP XẾP DÃY CON LIÊN TỤC

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--){
        int n;
        cin >> n;
        vector<int> a(n), tmp;
        for(auto &x : a)cin >> x;
        tmp = a;
        sort(tmp.begin(), tmp.end());
        int r = -1, l = -1;
        for(int i = 0; i < n; i++){
            if(a[i] != tmp[i]){
                if(l == -1)l = i + 1;
                else r = i + 1;
            }
        }
        cout << l << " "<< r << endl;
    }
    return 0;
}