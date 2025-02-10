//https://code.ptit.edu.vn/student/question/DSA01027
//HOÁN VỊ DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(auto &num : x) cin >> num;
    sort(x.begin(),x.end());
    while (true){  
        for(auto num : x) cout << num << " ";
        cout << endl;
        int pos = n - 2, i = n - 1;
        while (pos >= 0 && x[pos] > x[pos + 1] ){
            pos--;
        }
            if(pos < 0) break;
        while (x[i] < x[pos]){ 
            i --;
        }
        swap(x[pos],x[i]);
        reverse(x.begin() + pos + 1,x.end());
    }
    return 0;
}