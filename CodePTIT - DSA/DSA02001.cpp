//https://code.ptit.edu.vn/student/question/DSA02001
//DÃY SỐ 1

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void Try(vector<int> &currentArr){
    int len = currentArr.size();
    cout << "[";
    for(int i = 0; i < len; i++){
        if(i == len - 1) cout << currentArr[i] << "]";
        else cout << currentArr[i] << " ";
    }
    cout << endl;
    if(len == 1) return;
    vector<int> nextArr(len - 1);
    for(int i = 0; i < len - 1; i++)
        nextArr[i] = currentArr[i] + currentArr[i + 1];
    Try(nextArr);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n);
        for(auto &x : a) cin >> x;
        Try(a);
    }
    return 0;
} 