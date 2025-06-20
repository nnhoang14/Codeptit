//https://code.ptit.edu.vn/student/question/DSA11004
//DUYỆT CÂY THEO MỨC

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void levelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        cout << cur->data << " ";
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, Node*> nodes;
        Node* root = nullptr;
        for(int i = 0; i < n; i++) {
            int u, v;
            char c;
            cin >> u >> v >> c;
            if (nodes.find(u) == nodes.end()) {
                nodes[u] = new Node(u);
                if(i == 0) root = nodes[u];
            }
            if (nodes.find(v) == nodes.end()) {
                nodes[v] = new Node(v);
            }
            if (c == 'L') nodes[u]->left = nodes[v]; 
            else nodes[u] ->right = nodes[v];
        }
        levelOrder(root);
        cout << endl;
    }
    return 0;
}