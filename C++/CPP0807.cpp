//https://code.ptit.edu.vn/student/question/CPP0807
//LỚP INTSET


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ifstream input("DATA.in");
    int n,m,x;
    input >> n >> m;
    set<int> ds;
    unordered_map<int, int> mp;
    while (n--){
        input >> x;
        mp[x]++;
    }
    while (m--){
        input >> x;
        if(mp[x]) ds.insert(x);
    }
    for(auto x : ds) cout << x << " ";
    input.close();
	return 0;
}