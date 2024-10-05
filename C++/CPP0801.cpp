//https://code.ptit.edu.vn/student/question/CPP0801
//SAO CHÉP TỆP TIN

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
	string s;
    while(getline(input,s)){
        output<< s <<endl;
    }
    input.close();
    output.close();
	return 0;
}