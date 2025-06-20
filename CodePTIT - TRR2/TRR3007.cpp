//https://code.ptit.edu.vn/student/question/TRR3007
//3.7 Chu trình Hamilton

#include <iostream>
using namespace std;
#define MAX 1005

int n, cnt = 0, s, A[MAX][MAX], chuaxet[MAX], X[MAX];

void hmt (int k){
    for(int y = 1; y <= n; y ++)
        if(A[X[k - 1]][y])
            if(k == n + 1 && y == X[1]){
                for(int i = 1; i <= n; i++) cout << X[i] << " ";
                cout << X[1] << endl;
                cnt ++;
            }
            else if(chuaxet[y]){
                X[k] = y;
                chuaxet[y] = 0;
                hmt(k + 1);
                chuaxet[y] = 1;
            }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);                
    cout.tie(NULL);
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];
    for(int i = 1; i <= n; i++) 
        chuaxet[i] = 1; 
    X[1] = s;
    chuaxet[s] = 0;
    hmt(2);
    cout << cnt << endl;
}
