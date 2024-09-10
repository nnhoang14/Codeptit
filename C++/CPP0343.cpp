//https://code.ptit.edu.vn/student/question/CPP0343
//DÃY ƯU THẾ

#include <bits/stdc++.h>
using namespace std;

int check(int size, int count){
    if (size % 2 == 0 && size - count < count) return 1;
    if (size % 2 != 0 && size - count > count) return 1;
    return 0;
}

int main() {
    int test;
    cin>>test;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        int count = 0, size = 0, num; 
        while (ss >> num)
        {
            if(num % 2 == 0)count++;
            size++;
        }
        if(check(size,count))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}