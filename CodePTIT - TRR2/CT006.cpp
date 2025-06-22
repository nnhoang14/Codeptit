//https://code.ptit.edu.vn/student/question/CT005
//Chu trình Hamilton 02

#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

int n, u, sum_min = INT_MAX, visited[MAX];
vector<pair<int, int>> ke[MAX];
vector<int> path, res;
void hmt(int i, int v, int sum) {
    if(sum > sum_min) return;
    if(i == n) {
        for(auto x : ke[v]) {
            if(x.first == u){
                path.push_back(u);
                sum += x.second;
                if(sum < sum_min) {
                    sum_min = min(sum_min, sum);
                    res = path;
                }
                path.pop_back();
                break;
            }
        }
        return;
    }

    for(auto x : ke[v]) {
        if(!visited[x.first]) {
            visited[x.first] = 1;
            path.push_back(x.first);
            hmt(i + 1, x.first, sum + x.second);
            path.pop_back();
            visited[x.first] = 0;
        }
    }
}

int main(){
    cin >> n >> u;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x > 0 && x <= 50 && i != j) {
                ke[i].push_back({j, x});
            }
        }
    }

    path.push_back(u);
    visited[u] = 1;
    hmt(1, u, 0);
    
    if(!res.empty()){
        cout << sum_min << endl;
        for(auto x : res) 
            cout << x << " ";
    } else {
        cout << 0;
    }

    return 0;
}