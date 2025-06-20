//5.3 - Xây dựng cây bao trùm bé nhất theo Prim

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

struct canh{
    int dau, cuoi, w;
};

int n, st;
vector<pair<int,int>> vt[MAX];
bool vs[MAX];

void Prim(int u){
    int dh = 0;
    vector<canh> mst;
    vs[u] = true;
    while(mst.size() != n-1){
        int min_w = 1e9 + 7;
        int x, y;
        for(int i = 1; i<= n; i++){
            if(vs[i]){
                for(auto it :vt[i]){
                    if(!vs[it.first]){
                        if(it.second < min_w){
                            min_w = it.second;
                            y = i;
                            x = it.first;
                        }
                    }
                }
            }
        }
        mst.push_back({x, y, min_w});
        vs[x] = true;
        dh += min_w;
    }
    cout << "dH = " << dh << endl;
    for(auto it : mst){
        if(it.dau > it.cuoi) swap(it.dau, it.cuoi);
        cout << it.dau << " " << it.cuoi << endl;
    }
}

int main(){
    cin >> n >> st;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x !=0 && i < j){
                vt[i].push_back({j, x});
                vt[j].push_back({i,x});
            }
        }
    }
    memset(vs, false, sizeof(vs));
    Prim(st);
}