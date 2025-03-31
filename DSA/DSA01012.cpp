//https://code.ptit.edu.vn/student/question/DSA01012
//MÃ GRAY 1

#include <bits/stdc++.h>
using namespace std;

void generateGrayCode(int n) {
    vector<string> grayCodes;
    grayCodes.push_back("0");
    grayCodes.push_back("1");
    
    for (int i = 2; i <= n; i++) {
        int size = grayCodes.size();
        for (int j = size - 1; j >= 0; j--) {
            grayCodes.push_back("1" + grayCodes[j]);
        }
        for (int j = 0; j < size; j++) {
            grayCodes[j] = "0" + grayCodes[j];
        }
    }
    
    for (auto x : grayCodes)
        cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        generateGrayCode(n);
    }
    return 0;
}
