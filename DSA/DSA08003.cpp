//https://code.ptit.edu.vn/student/question/DSA08003
//HÀNG ĐỢI HAI ĐẦU (DEQUEUE)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    deque<string> dq;
    unordered_map<string, int> command = {
        {"PUSHFRONT", 1},
        {"PRINTFRONT", 2},
        {"POPFRONT", 3},
        {"PUSHBACK", 4},
        {"PRINTBACK", 5},
        {"POPBACK", 6}
    };
    while (n--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string status, val;
        ss >> status;
        switch (command[status]) {
            case 1:
                ss >> val;
                dq.push_front(val);
                break;
            case 2:
                cout << (dq.empty() ? "NONE" : dq.front()) << endl;
                break;
            case 3:
                if (!dq.empty()) dq.pop_front();
                break;
            case 4:
                ss >> val;
                dq.push_back(val);
                break;
            case 5:
                cout << (dq.empty() ? "NONE" : dq.back()) << endl;
                break;
            case 6:
                if (!dq.empty()) dq.pop_back();
                break;
        }
    }
    return 0;
}