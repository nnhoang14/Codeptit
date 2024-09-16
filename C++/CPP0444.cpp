//https://code.ptit.edu.vn/student/question/CPP0444
//TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n,val,pt;
        cin>>n>>val;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            cin>>res[i];
            if(res[i] == val)pt = i + 1;
        }
        cout << pt << endl;
    }
    return 0;
}