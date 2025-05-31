//https://code.ptit.edu.vn/student/question/DSA08021
//DI CHUYỂN TRONG MA TRẬN

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct cells {
    int r, c, step;
    cells(int r, int c, int step){
        this->r = r;
        this->c = c;
        this->step = step;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(auto &row : a)
            for(auto &cell : row)
                cin >> cell;
        queue<cells> q;
        int res = -1;
        q.push(cells(0, 0, 0));
        visited[0][0] = true;
        while (!q.empty()) {
            cells cur = q.front();
            q.pop();
            int i = cur.r, j = cur.c;
            if (cur.r == n - 1 && cur.c == m - 1) {
                res = cur.step;
                break;
            }
            if(i + a[i][j] < n && !visited[i + a[i][j]][j]) {
                visited[i + a[i][j]][j] = true;
                q.push(cells(i + a[i][j], j, cur.step + 1));
            }
            if(j + a[i][j] < m && !visited[i][j + a[i][j]]) {
                visited[i][j + a[i][j]] = true;
                q.push(cells(i, j + a[i][j], cur.step + 1));
            }
        }
        cout << res << endl;
    }
    return 0;
}