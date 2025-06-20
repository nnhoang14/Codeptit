//https://code.ptit.edu.vn/student/question/CPP0451
//PHẦN TỬ GẦN NHẤT

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int test;
    cin >> test;
    while (test -- )
    {
        int n, x, k, pos = -1;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin >> a[i];
        cin >> k >> x;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                pos = i;
                break;
            }
        }
        for(int i = pos - k/2; i < pos; i ++)
            cout << a[i] << " ";
        for(int i = pos + 1; i <= pos + k/2; i ++){
            if(i >= a.size()) a.push_back(0);
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
