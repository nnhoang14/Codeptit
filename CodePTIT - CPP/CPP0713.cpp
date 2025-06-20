//https://code.ptit.edu.vn/student/question/CPP0713
//LIỆT KÊ HOÁN VỊ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[21],visited[21];

void backtracking(int pos){
    if(pos > n){
        for(int i = 1; i <= n; i++)
            cout << a[i];
        cout << " ";
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            a[pos] = i;
            visited[i] = 1;
            backtracking(pos + 1);
            visited[i] = 0;
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test --)
    {
        memset(visited, 0, sizeof(visited));
        cin >> n;
        backtracking(1);
    }
    return 0;
}