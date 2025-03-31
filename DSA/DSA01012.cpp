#include <iostream>
#include <vector>

using namespace std;

// Hàm sinh mã Gray kế tiếp
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
    
    for (const string &code : grayCodes) {
        cout << code << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    vector<int> testCases(T);
    for (int i = 0; i < T; i++) {
        cin >> testCases[i];
    }
    
    for (int n : testCases) {
        generateGrayCode(n);
    }
    
    return 0;
}
