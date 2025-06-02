//https://code.ptit.edu.vn/student/question/CTDL_003
//PHƯƠNG ÁN TỐI ƯU

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w;
    cin >> n >> w;
    vector<int> c(n), a(n);
    for(auto &x : c)  cin >> x;
    for(auto &x : a)  cin >> x;

    int FOPT = 0;
    vector<vector<int>> dp;
    vector<int> visited(n, 0);
    
    while(true){
        int sum = 0, weight = 0;
        bool valid = true;
        for(int i = 0; i < n; i++){
            if(visited[i]){
                sum += c[i];
                weight += a[i];
                if(weight > w){ 
                    valid = false;
                    break;
                }
            }
        }
        if(valid) {
            if(FOPT < sum){
                FOPT = sum;
                dp.clear();
                dp.push_back(visited);
            } else if(FOPT == sum){
                dp.push_back(visited);
            }
        }
        
        int i = n - 1;
        while(i >= 0 && visited[i]){
            visited[i] = 0;
            i--;
        }
        if(i < 0) break;
        visited[i] = 1;
    }

    cout << FOPT << endl;
    for(auto &x : dp){
        for(auto &y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}