//https://code.ptit.edu.vn/student/question/OLP017
//PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - ver 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll lt = 1e7;
vector<bool> isPrime(lt + 1, true);
vector<ll> prime;

void fillprime(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= lt ; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= lt; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= lt; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    fillprime();
	int test;
    cin >> test;
    while (test--){
        ll n;
        cin >> n;
        map<ll, int> mp;
        for(auto x : prime){
            if (x * x > n) break;
            while (n % x == 0){
                mp[x]++;
                n /= x;
            }
        }
        if(n > 1) mp[n]++;
        for(auto entry : mp) 
            cout << entry.first << " " << entry.second << endl;
        cout << endl;
    }
	return 0;
}